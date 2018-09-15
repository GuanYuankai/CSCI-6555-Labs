# version 410 core
layout (location = 0) in vec3 aPos;

uniform mat4 transform;
uniform mat4 view;
uniform mat4 projection;

out vec4 color;

void main()
{
    gl_Position = projection * view * transform * vec4(aPos, 1.0);
    color = vec4(in_color, 1.0);
}