#pragma once
#include "world/level/block/WoodBlock.h"
#include "minecraftpe/client/renderer/texture/TextureUVCoordinateSet.h"
class OakPlanks:public WoodBlock
{
    public:
    OakPlanks(std::string const&,int);
    virtual const TextureUVCoordinateSet& getTexture(signed char);
    TextureUVCoordinateSet tex;
    void initTextures();

};