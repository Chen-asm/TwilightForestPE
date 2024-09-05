#pragma once

#include "ChunkSource.h"
class BlockPos;
class ChunkViewSource : public ChunkSource
{
	public:
    
	struct ViewArea
	{
		char filler[48];
		int posX;
		int posY;
		int posZ;
	};

	ViewArea& getArea();
	ChunkViewSource(ChunkSource&, ChunkSource::LoadMode);
	LevelChunk* getExistingChunk(ChunkPos const&);
	void move(BlockPos const&, BlockPos const&);

	

};