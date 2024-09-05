#pragma once

#include "mcpe/util/BlockPos.h"
#include "mcpe/util/Vec3.h"
class Entity;

class ChunkPos
{
public:
	static ChunkPos INVALID;

public:
	int x;	// 0
	int z;	// 4

public:
	ChunkPos( BlockPos const&);
	ChunkPos( Vec3 const&);
	float distanceToSqr( Entity const&) const;
};
