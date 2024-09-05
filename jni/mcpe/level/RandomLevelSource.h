#pragma once

#include "ChunkSource.h"
class Level;
class Dimension;
class BlockSource;
class Random;
class Biome;
class RandomLevelSource
: public ChunkSource
{
	public:

	RandomLevelSource(Level*, Dimension*, unsigned int, bool);

	virtual ~RandomLevelSource();
	virtual LevelChunk* requestChunk(const ChunkPos&, ChunkSource::LoadMode);
	virtual float getHeights(float*, Biome**, int, int, int);
	virtual void loadChunk(LevelChunk&, bool);
	virtual void postProcess(ChunkViewSource&);
	virtual void postProcessMobsAt(BlockSource*, int, int, Random&);
};

