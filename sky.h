#ifndef SKY_H_INCLUDED
#define SKY_H_INCLUDED

// Rozmiar w X (połowa długości)
#define SKY_SIZE 5.0f
#define SKY_HEIGHT 15.0f
#define SKY_ASPECT_RATIO (744.0f / 419.0f)
#define SKY_Z_SIZE (SKY_SIZE/SKY_ASPECT_RATIO/20.0f)  // dopasowany Z

int skyVertexCount = 6;

float skyVertices[] = {
    -SKY_SIZE, SKY_HEIGHT, -SKY_Z_SIZE, 1.0f,
     SKY_SIZE, SKY_HEIGHT, -SKY_Z_SIZE, 1.0f,
     SKY_SIZE, SKY_HEIGHT,  SKY_Z_SIZE, 1.0f,

    -SKY_SIZE, SKY_HEIGHT, -SKY_Z_SIZE, 1.0f,
     SKY_SIZE, SKY_HEIGHT,  SKY_Z_SIZE, 1.0f,
    -SKY_SIZE, SKY_HEIGHT,  SKY_Z_SIZE, 1.0f,
};

float skyNormals[] = {
    0.0f, -1.0f, 0.0f, 0.0f,  // w dół
    0.0f, -1.0f, 0.0f, 0.0f,
    0.0f, -1.0f, 0.0f, 0.0f,

    0.0f, -1.0f, 0.0f, 0.0f,
    0.0f, -1.0f, 0.0f, 0.0f,
    0.0f, -1.0f, 0.0f, 0.0f,
};

float skyTexCoords[] = {
    0.0f, 0.0f,
    1.0f, 0.0f,
    1.0f, 1.0f,

    0.0f, 0.0f,
    1.0f, 1.0f,
    0.0f, 1.0f,
};

#endif // SKY_H_INCLUDED
