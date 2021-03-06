#include "CubeAsset.h"

CubeAsset::CubeAsset(float x, float y, float z, float r, float b, float g) {

  color = glm::vec3(r,b,g);
  // model coordinates, origin at centre.
  vertex_buffer_length = 24;	
  GLfloat vertex_buffer [] {

		 -0.5f+x,  0.5f+y,  0.5f+z,
		  0.5f+x,  0.5f+y,  0.5f+z,
		  0.5f+x, -0.5f+y,  0.5f+z,
		 -0.5f+x, -0.5f+y,  0.5f+z,

		 -0.5f+x,  0.5f+y,  -0.5f+z,
		  0.5f+x,  0.5f+y,  -0.5f+z,
		  0.5f+x, -0.5f+y,  -0.5f+z,
		 -0.5f+x, -0.5f+y,  -0.5f+z,

  };

  element_buffer_length = 36;
  GLuint element_buffer []  {
	//front face
    	0, 1, 2,
	0, 2, 3,

	//top face
	0, 4, 5,
	0, 5, 1,

	//back face
	4, 5, 6,
	4, 6, 7,

	// left face
	0, 4, 7,
	0, 7, 3,

	//right face
	1, 5, 6,
	1, 6, 2,

	//bottom face
	2, 6, 7,
	2, 7, 3

  };



  // Transfer buffers to the GPU
  //

  // create buffer
  glGenBuffers(1, &vertex_buffer_token);

  // immediately bind the buffer and transfer the data
  glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer_token);
  glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat) * vertex_buffer_length, vertex_buffer, GL_STATIC_DRAW);

  glGenBuffers(1, &element_buffer_token);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, element_buffer_token);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(GLuint) * element_buffer_length, element_buffer, GL_STATIC_DRAW);
}

CubeAsset::~CubeAsset() {
}

#ifdef DEBUG
#define checkGLError() checkError(__FILE__, __LINE__)
#else
// define symbol to be nothing
#define checkGLError()
#endif

void checkError(std::string file, int line) {
  GLenum gl_error = glGetError();
  if(GL_NO_ERROR != gl_error) {
    std::cerr << "GL error in " << file << " at line " << line << " error: " << gl_error << std::endl;
    exit(-1);
  }
}

void CubeAsset::Draw(GLuint program_token) {
  if(!glIsProgram(program_token)) {
    std::cerr << "Drawing Cube with invalid program" << std::endl;
return;
}
  GLint validation_ok;
  glValidateProgram(program_token);
  glGetProgramiv(program_token, GL_VALIDATE_STATUS, &validation_ok);
  if(!validation_ok) {
    GLint maxLength = 0;
    glGetProgramiv(program_token, GL_INFO_LOG_LENGTH, &maxLength);

    //The maxLength includes the NULL character
    std::vector<char> errorLog(maxLength);
    glGetProgramInfoLog(program_token, maxLength, &maxLength, &errorLog[0]);

    std::cerr << "Invalid program " << program_token << " with error code " << validation_ok << std::endl;
    for(auto c: errorLog) {
      std::cerr << c;
    }
    exit(-1);
  }

GLuint model_attrib = glGetUniformLocation(program_token, "model");
  checkGLError();
  glUniformMatrix4fv(model_attrib, 1, GL_FALSE, glm::value_ptr(matrix));


GLuint color_attrib = glGetUniformLocation(program_token, "color");
glUniform3fv(color_attrib, 1, glm::value_ptr(color));


  GLuint position_attrib = glGetAttribLocation(program_token, "position");
  checkGLError();

  glUseProgram(program_token);
  checkGLError();

  // use the previously transferred buffer as the vertex array.  This way
  // we transfer the buffer once -- at construction -- not on every frame.
  glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer_token);
  glVertexAttribPointer(
                        position_attrib,               /* attribute */
                        3,                             /* size */
                        GL_FLOAT,                      /* type */
                        GL_FALSE,                      /* normalized? */
                        0,                             /* stride */
                        (void*)0                       /* array buffer offset */
                        );
  glEnableVertexAttribArray(position_attrib);

  checkGLError();

  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, element_buffer_token);
  glDrawElements(
                 GL_TRIANGLES,
                 element_buffer_length,
                 GL_UNSIGNED_INT,
                 (GLvoid*) 0
                 );

  checkGLError();

  glDisableVertexAttribArray(position_attrib);
}
