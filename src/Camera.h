#pragma
#ifndef CAMERA_H
#define CAMERA_H

#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4


class Camera {

public:

Camera();
glm::mat4 getView();
void translate(float x,float y, float z);


private:

GLfloat x_pos, y_pos, z_pos;
glm::vec3 cameraPosition, cameraTarget;
glm::mat4 ViewMatrix;

	

};

#endif
