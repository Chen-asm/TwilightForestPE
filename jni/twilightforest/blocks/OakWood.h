#pragma once
#include "world/level/block/WoodBlock.h"
#include "minecraftpe/client/renderer/texture/TextureUVCoordinateSet.h"
class OakWood:public WoodBlock
{
    public:
    OakWood(std::string const&,int);
    virtual const TextureUVCoordinateSet& getTexture(signed char);
    TextureUVCoordinateSet top_tex;
    //TextureUVCoordinateSet bottom_tex;
    TextureUVCoordinateSet side_tex;
    void initTextures();

};