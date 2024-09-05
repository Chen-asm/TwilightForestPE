#pragma once

#include "mcpe/block/Block.h"
#include "mcpe/block/blocks/Sapling.h"
class TwilightSapling : public Sapling
{
public:
	TwilightSapling();
public:
	virtual const AABB& getCollisionShape(AABB&, BlockSource&, BlockPos const&, Entity*)const;
	//virtual void tick(BlockSource&, BlockPos const&, Random&)const;
	//virtual void onFertilized(BlockSource&, BlockPos const&, Entity*)const;
	virtual bool mayPlaceOn(Block const&)const;
	virtual bool canSurvive(BlockSource&, BlockPos const&)const;
	//virtual void neighborChanged(BlockSource&, BlockPos const&, BlockPos const&)const;
	virtual bool checkIsPathable(Entity&, BlockPos const&, BlockPos const&)const;
	virtual void onGraphicsModeChanged(bool, bool, bool);
	virtual int getRenderLayer(BlockSource&, BlockPos const&) const;
	virtual int getExtraRenderLayers() const;
	virtual bool waterSpreadCausesSpawn() const;
	virtual std::string buildDescriptionName(unsigned char aux) const;
protected:
	//bool grow(BlockSource&,BlockPos const&,Random&)const;
	void makeParticles(BlockSource&,BlockPos const&,Random&)const;
};