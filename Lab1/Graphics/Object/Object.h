#ifndef GRAPHICS_OBJECT_OBJECT_H
#define GRAPHICS_OBJECT_OBJECT_H

#include <glm/glm.hpp>
#include "../Models/Model.h"

class Object3D
{
  private:
    const Model &model;
	glm::mat4 transform;
	float opacity = 1.0;

  public:
	Object3D(const Model &model);
	void setTransformMatrix(const glm::mat4& transform);
	void setOpacity(float opacity);
	void draw(ShaderProgram& shader);
}; 

class Object2D
{
private:
	const Model &model;
	glm::mat3 transform;
	float z;
	float opacity = 1.0;

public:
	Object2D(const Model &model);
	void setTransformMatrix(const glm::mat3& transform);
	void setZ(float z);
	void setOpacity(float opacity);
	void draw(ShaderProgram& shader);
};

#endif // GRAPHICS_OBJECT_OBJECT_H