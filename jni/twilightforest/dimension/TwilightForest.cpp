#include "TwilightForest.h"
#include <cmath>
TwilightForest::TwilightForest(Level& level):Dimension(level,DimensionId::TWILIGHTFOREST)
{
    
}
void TwilightForest::init()
{
    Dimension::init();
    setCeiling(true);
    setUltraWarm(true);
    
}
void TwilightForest::tick()
{}
float TwilightForest::getFogDistanceScale()const
{
    return (float)160;
}

float TwilightForest::getTimeOfDay(int,float)const
{
    return 0.3f;
}

float TwilightForest::getCloudHeight()const
{
    return 9.0f;
}
Color TwilightForest::getFogColor(float) const
{

    return Color::GREEN;
}

bool TwilightForest::isNaturalDimension()const
{
    return true;
}
bool TwilightForest::mayRespawn()const
{
    return true;
}
bool TwilightForest::isValidSpawn(int x,int z)const
{
    return true;
}
bool TwilightForest::isFoggyAt(int x,int z)const
{
    return true;
}
const std::string TwilightForest::getName()const
{
    return "TWilightForest";
}

bool TwilightForest::isDay()const
{
    return false;
}
bool TwilightForest::hasGround()const
{
    return true;
}

void TwilightForest::onBlockEvent(BlockSource&, int, int, int, int, int)
{

}
void TwilightForest::onNewChunkFor(Player&, LevelChunk&)
{

}

