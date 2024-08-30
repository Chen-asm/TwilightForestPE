#pragma once
#include "../BlockPos.h"

struct ChunkPos
{
	int x, z;
};

struct ChunkBlockPos
{
	int x, y, z;
	ChunkBlockPos(BlockPos const&);
};
