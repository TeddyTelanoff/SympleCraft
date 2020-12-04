#pragma once

#include "SympleCraft/Render/Mesh.h"
#include "SympleCraft/World/Block.h"

#define CHUNK_SIZE_X 16
#define CHUNK_SIZE_Y 16
#define CHUNK_SIZE_Z 16

typedef struct Chunk
{
	int X, Y;
	Block*** Blocks;
	Mesh Mesh;
} *Chunk;

Chunk CreateChunk(int x, int y);
void DeleteChunk(const Chunk chunk);

void GenerateChunkMesh(const Chunk chunk);