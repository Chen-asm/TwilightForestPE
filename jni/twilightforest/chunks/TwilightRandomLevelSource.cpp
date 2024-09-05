#include "TwilightRandomLevelSource.h"
TwilightRandomLevelSource::TwilightRandomLevelSource(Level* level, Dimension*dimension,int seed): ChunkSource(level,dimension,16),random(seed)
{
  noiseGenerators[0] = new PerlinNoise(random, 16, 0);
	noiseGenerators[1] = new PerlinNoise(random, 16, 0);
	noiseGenerators[2] = new PerlinNoise(random, 8, 0);
	noiseGenerators[3] = new PerlinNoise(random, 10, 0);
	noiseGenerators[4] = new PerlinNoise(random, 16, 0);
  noiseGenerators[5] = new PerlinNoise(random, 16, 0);
}
/*
LevelChunk* TwilightRandomLevelSource::requestChunk(ChunkPos const&,ChunkSource::LoadMode)
{

}
*/
void TwilightRandomLevelSource::loadChunk(LevelChunk &,bool)
{

}
void TwilightRandomLevelSource::postProcess(ChunkViewSource&)
{

}