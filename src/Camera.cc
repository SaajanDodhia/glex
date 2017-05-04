#include "GameAssetManager.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Camera.h"

Camera::Camera(){
float x_pos = 0.0f;
float y_pos = 0.0f;
float z_pos = 0.0f;
glm::vec3 cameraPosition = glm::vec3(x_pos, y_pos, z_pos);
glm::vec3 cameraTarget = glm::vec3 (0.0f, 0.0f, 0.0f);
glm::mat4 ViewMatrix = glm::lookAt(cameraPosition, cameraTarget, glm::vec3(0.0f, 1.0f, 0.0f));
translate(0.0f,0.0f,-5.0f);
ViewMatrix = glm::mat4();
}

glm::mat4 Camera::getView() {
return ViewMatrix;
}

void Camera::translate(float x,float y, float z){

glm::mat4 translate;

translate[3][0]+=x;
translate[3][1]+=y;           //traslates the x,y and z axis
translate[3][2]+=z;

ViewMatrix*=translate;
}



