#version 330 core

in vec3 fragPos;
in vec3 fragNormal;
in vec2 uv;

uniform sampler2D textureMap0;
uniform sampler2D textureMap1;

uniform vec3 cameraPos;

out vec4 outColor;

void main() {
    vec3 normal = normalize(fragNormal);
    vec3 lightDir = normalize(cameraPos - fragPos);

    // -- Diffuse lighting (kąt padania)
    float diff = max(dot(normal, lightDir), 0.0);
    diff = mix(0.4, 1.0, pow(diff, 2.0));  // zawsze co najmniej 0.4 — mniej ostre różnice

    // -- Attenuacja (punktowe światło)
    float distance = length(fragPos - cameraPos);
    float attenuation = 1.0 / (0.2 + 0.15 * distance + 0.05 * distance * distance);

    // -- Ambient
    vec3 ambient = vec3(0.08);  // minimalne światło zawsze obecne

    // -- Tekstury i światło
    vec3 diffuseColor = texture(textureMap0, uv).rgb;
    vec3 ivyColor = texture(textureMap1, uv).rgb;
    vec3 finalColor = mix(diffuseColor, ivyColor, 0.1);

    vec3 lightColor = vec3(0.7, 0.5, 0.2);
    vec3 lighting = (diff * lightColor + ambient) * attenuation;

    vec3 result = finalColor * lighting;

    outColor = vec4(result, 1.0);
}
