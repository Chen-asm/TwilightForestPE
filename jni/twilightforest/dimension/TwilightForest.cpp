#include "TwilightForest.h"
#include <cmath>
TwilightForest::TwilightForest(Level& level):Dimension(level,DimensionId::NETHER)
{
    
}
void TwilightForest::init()
{
    Dimension::init();
    setUltraWarm(true);
    setCeiling(true);
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
    return 64;
}
Color TwilightForest::getFogColor(float multiplier) const
{
    int baseColor = 0x228B22;
    float helper = cos(multiplier * 3.1415926536F * 2.0F) * 2.0F + 0.5F;
    if(helper < 0.0F)
    {
        helper = 0.0F;

    }
    if(helper > 1.0F)
    {
        helper = 1.0F;
    }
    float r = (baseColor >> 16 & 255) / 255.0F;
    float g = (baseColor >> 8 & 255) /255.0F;
    float b = (baseColor & 255) / 255.0F;
    float a = 1.0F;
    r *= helper * 0.0F + 0.15F;
    g *= helper * 0.0F + 0.15F;
    b *= helper * 0.0F + 0.15F;
    return Color(r,g,b,a);
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

