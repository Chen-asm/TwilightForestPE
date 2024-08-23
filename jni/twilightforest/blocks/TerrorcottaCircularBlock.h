#pragma once
#include "minecraftpe/world/level/block/Block.h"
#include "minecraftpe/client/renderer/texture/TextureUVCoordinateSet.h"
class TerrorcottaCircularBlock:public Block
{
    public:
    TerrorcottaCircularBlock(std::string const&, int, Material const&);
    virtual const TextureUVCoordinateSet& getTexture(signed char);
    TextureUVCoordinateSet tex;
  
    void initTextures();

};