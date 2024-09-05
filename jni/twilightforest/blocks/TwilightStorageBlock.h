#pragma once
#include "mcpe/block/Block.h"
class TwilightStorageBlock : public Block
{
public:
	TwilightStorageBlock();
public:
	virtual std::string buildDescriptionName(unsigned char aux) const;
	virtual int getSpawnResourcesAuxValue(unsigned char)const;
	virtual int getPlacementDataValue(Entity&, BlockPos const&, signed char, Vec3 const&, int)const;
};