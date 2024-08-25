#include "TwilightBiome.h"
#include "minecraftpe/world/level/biome/Biome.h"
#include "minecraftpe/client/renderer/Color.h"
#include "minecraftpe/util/Random.h"
#include "minecraftpe/world/level/BlockSource.h"
#include "minecraftpe/world/level/Level.h"
#include "minecraftpe/world/level/BlockPos.h"


TwilightBiome::TwilightBiome(int biomeid): Biome(biomeid,Biome::BiomeType::Savanna,std::unique_ptr<BiomeDecorator>())
{
    surfaceBlock = 7;
    fillerBlock = 7;
}
const Color TwilightBiome::getSkyColor(float)
{
    return Color::GREEN;
}
void TwilightBiome::decorate(BlockSource * region, Random &rng, BlockPos const & pos, bool, float)
{

}



