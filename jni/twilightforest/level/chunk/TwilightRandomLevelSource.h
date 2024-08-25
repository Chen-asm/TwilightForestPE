#pragma once

#include "minecraftpe/util/Random.h"
#include "minecraftpe/world/level/gen/algorithm/PerlinNoise.h"
#include "minecraftpe/world/level/gen/ChunkSource.h"

struct TwilightRandomLevelSource
: public ChunkSource
{
	Random endRNG;
	PerlinNoise* noiseGenerators[5];
	float densities[5000];

	TwilightRandomLevelSource(Level*, Dimension*, unsigned int);

	float* getHeights(float*, int, int, int, int, int, int);
	void prepareHeights(int, int, LevelChunk&);
	void buildSurfaces(LevelChunk&, ChunkPos);

	virtual ~TwilightRandomLevelSource();
	virtual LevelChunk* requestChunk(const ChunkPos& pos, ChunkSource::LoadMode);
	virtual void loadChunk(LevelChunk&);

	virtual void postProcess(ChunkViewSource&);

	//virtual std::vector<Mob*> getMobsAt(BlockSource&, EntityType, const BlockPos&);
};