#pragma once
#include "minecraftpe/world/level/biome/Biome.h"
#include "minecraftpe/world/level/biome/BiomeDecorator.h"
class TwilightBiome : public Biome
{
    public:
    
TwilightBiome(int);
virtual const Color getSkyColor(float);

virtual void decorate(BlockSource *, Random &, BlockPos const &, bool, float);

};