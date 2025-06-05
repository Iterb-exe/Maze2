#version 330 core

in vec4 vertex;         // sp->a("vertex")
in vec2 texCoord0;      // sp->a("texCoord0")
in vec4 normal;         // sp->a("normal")

uniform mat4 M;         // model matrix
uniform mat4 V;         // view matrix
uniform mat4 P;         // projection matrix

out vec3 fragPos;       // dla światła
out vec3 fragNormal;    
out vec2 uv;

void main() {
    mat4 MVP = P * V * M;
    gl_Position = MVP * vertex;

    fragPos = vec3(M * vertex); // pozycja wierzchołka w świecie
    fragNormal = mat3(transpose(inverse(M))) * vec3(normal); // normalna w świecie
    uv = texCoord0;
}