#ifndef FLOOR_H_INCLUDED
#define FLOOR_H_INCLUDED

// myCubeVertices -homogenous coordinates of vertices in model space
// myCubeNormals - homogenous normal vectors of faces (per vertex) in model
// space myCubeVertexNormals - homogenous vertex normals in model space
// myCubeTexCoords - texturing coordinates
// myCubeColors - vertex colors
// myCubeC1 - TBN^-1 matrix column
// myCubeC2 - TBN^-1 matrix column
// myCubeC3 - TBN^-1 matrix column

#define FLOOR_SIZE 1.0f

int floorVertexCount = 6;

float floorVertices[] = {
    -FLOOR_SIZE, -1.0f, -FLOOR_SIZE, 1.0f,  FLOOR_SIZE,  -1.0f,
    FLOOR_SIZE,  1.0f,  FLOOR_SIZE,  -1.0f, -FLOOR_SIZE, 1.0f,

    -FLOOR_SIZE, -1.0f, -FLOOR_SIZE, 1.0f,  -FLOOR_SIZE, -1.0f,
    FLOOR_SIZE,  1.0f,  FLOOR_SIZE,  -1.0f, FLOOR_SIZE,  1.0f,
};

float floorNormals[] = {
    0.0f, -1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f,

    0.0f, -1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f,
};

float floorVertexNormals[] = {
    -1.0f, -1.0f, -1.0f, 0.0f,  1.0f,  -1.0f,
    1.0f,  0.0f,  1.0f,  -1.0f, -1.0f, 0.0f,

    -1.0f, -1.0f, -1.0f, 0.0f,  -1.0f, -1.0f,
    1.0f,  0.0f,  1.0f,  -1.0f, 1.0f,  0.0f,
};

float floorTexCoords[] = {
    FLOOR_SIZE, FLOOR_SIZE, 0.0f,       0.0f, 0.0f, FLOOR_SIZE,
    FLOOR_SIZE, FLOOR_SIZE, FLOOR_SIZE, 0.0f, 0.0f, 0.0f,
};

#endif // MYCUBE_H_INCLUDED
