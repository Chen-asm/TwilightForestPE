#pragma once

#include "mcpe/block/Block.h"

class TwilightLeaf : public Block
{
public:
	TwilightLeaf();
public:
	//virtual void tick(BlockSource&, BlockPos const&, Random&)const;
	virtual std::string buildDescriptionName(unsigned char aux) const;
	virtual int getResource(Random&, int, int)const;
	virtual int getResourceCount(Random&, int, int)const;
	virtual ItemInstance getSilkTouchItemInstance(unsigned char)const;
	virtual void onGraphicsModeChanged(bool, bool, bool);
	virtual int getRenderLayer(BlockSource&, BlockPos const&) const;
	virtual void playerDestroy(Player*, BlockPos const&, int) const;
	virtual int getPlacementDataValue(Entity&, BlockPos const&, signed char, Vec3 const&, int) const;


};