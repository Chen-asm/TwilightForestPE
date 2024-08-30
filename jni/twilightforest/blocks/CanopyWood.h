#pragma once
#include "world/level/block/WoodBlock.h"
#include "minecraftpe/client/renderer/texture/TextureUVCoordinateSet.h"
class CanopyWood:public WoodBlock
{
    public:
    CanopyWood(const std::string&, int);
    virtual const TextureUVCoordinateSet& getTexture(signed char);
    //virtual bool canHaveExtraData() const;
    //virtual const std::string& buildDescriptionName(const ItemInstance&) const;
    TextureUVCoordinateSet top_tex;
    //TextureUVCoordinateSet bottom_tex;
    TextureUVCoordinateSet side_tex;
    //virtual int getSpawnResourcesAuxValue(unsigned char);
    //virtual int getPlacementDataValue(Mob&, const BlockPos&, signed char, const Vec3&, int);
    //virtual const std::string& buildDescriptionName(const ItemInstance&) const;
    void initTextures();

};