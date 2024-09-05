#pragma once

#include "mcpe/level/ChunkSource.h"
#include "mcpe/level/ChunkViewSource.h"
#include "mcpe/level/Dimension.h"
#include "mcpe/level/chunk/LevelChunk.h" 
#include "mcpe/util/PerlinNoise.h"
#include "mcpe/util/Vec2.h"
#include "mcpe/util/Vec3.h"
#include "mcpe/util/Random.h"
#include <cmath>
#include <cstdlib>

class TwilightRandomLevelSource:public ChunkSource{
public: 

 Random random;
 PerlinNoise* noiseGenerators[6];
 float densities[5000];

 TwilightRandomLevelSource(Level*, Dimension*,int);
 //virtual ~TwilightRandomLevelSource();

 
 
 //virtual LevelChunk* requestChunk(ChunkPos const&,ChunkSource::LoadMode);
 virtual void loadChunk(LevelChunk &,bool);
 virtual void postProcess(ChunkViewSource&);
};