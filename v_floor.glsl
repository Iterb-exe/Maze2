#version 330 core

// Atrybuty
layout(location = 0) in vec4 vertex;
layout(location = 1) in vec2 texCoord0;
layout(location = 2) in vec4 normal;

// Uniformy
uniform mat4 P;           // macierz projekcji
uniform mat4 V;           // macierz widoku
uniform mat4 M;           // macierz modelu

// Do fragment shadera
out vec2 vTexCoord;
out vec3 fragNormal;
out vec3 fragPos;

void main() {
    vec4 worldPos = M * vertex;
    fragPos = vec3(worldPos); // pozycja w przestrzeni świata (ważne!)
    
    // Normal przekształcona do przestrzeni świata
    fragNormal = normalize(mat3(M) * vec3(normal)); 

    vTexCoord = texCoord0;
    
    gl_Position = P * V * worldPos;
}
