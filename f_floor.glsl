#version 330 core

in vec2 vTexCoord;
in vec3 fragNormal;
in vec3 fragPos;

out vec4 pixelColor;

uniform sampler2D textureMap0;
uniform vec3 lightDir = normalize(vec3(0.5, 1.0, -0.7)); // światło z góry

void main() {
    vec3 norm = normalize(fragNormal);
    float light = max(dot(norm, lightDir), 0.2); // minimum ambient
    vec4 texColor = texture(textureMap0, vTexCoord);
    pixelColor = vec4(texColor.rgb * light, texColor.a);
}
