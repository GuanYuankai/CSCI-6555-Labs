#ifndef CAMERA_CAMERA_H
#define CAMERA_CAMERA_H

#include <glm/glm.hpp>

class Camera {
private:
    const glm::vec3 up = glm::vec3(0, 1, 0);
    glm::vec3 position = glm::vec3(0);
    glm::vec3 front = glm::vec3(0, 0, 1);
    glm::vec3 target = glm::vec3(0);
public:
    void setPosition(const glm::vec3& position);
    void move(const glm::vec3& direction);
    void moveForward(float distance);
    void moveBackward(float distance);
    void moveLeft(float distance);
    void moveRight(float distance);
    void moveUp(float distance);
    void moveDown(float distance);
    void lookAt(const glm::vec3& position);
    void lockView(const glm::vec3& position);
    glm::mat4 getViewMat();
};

#endif // CAMERA_CAMERA_H