#include "TwilightSapling.h"
#include "mcpe/block/blocks/Sapling.h"
#include "mcpe/level/BlockSource.h"
#include "mcpe/level/Level.h"
#include "mcpe/entity/player/Player.h"
#include "mcpe/entity/EntityClassTree.h"
#include "mcpe/util/Random.h"
#include "twilightforest/blocks/TwilightBlocks.h"
#include "mcpe/client/resources/I18n.h"


TwilightSapling::TwilightSapling() : Sapling("twilight.sapling",TwilightForest::TwilightBlocks::ID::mTwilightSapling)
{
	setCategory(CreativeItemCategory::BLOCKS);
	setTicking(true);
	setSolid(false);
	renderLayer=mSapling->renderLayer;
}
const AABB& TwilightSapling::getCollisionShape(AABB&box, BlockSource&s, BlockPos const&pos, Entity*e)const
{
	return mSapling->getCollisionShape(box,s,pos,e);
}


bool TwilightSapling::mayPlaceOn(Block const&b)const
{
	return mSapling->mayPlaceOn(b);
}
bool TwilightSapling::canSurvive(BlockSource&s, BlockPos const&pos)const
{
	return mSapling->canSurvive(s,pos);
}

bool TwilightSapling::checkIsPathable(Entity&, BlockPos const&, BlockPos const&)const
{
	return true;
}
void TwilightSapling::onGraphicsModeChanged(bool, bool, bool)
{
	renderLayer=mSapling->renderLayer;
}
int TwilightSapling::getRenderLayer(BlockSource&s, BlockPos const&pos) const
{
	return mSapling->getRenderLayer(s,pos);
}
int TwilightSapling::getExtraRenderLayers() const
{
	return mSapling->getExtraRenderLayers();
}
std::string TwilightSapling::buildDescriptionName(unsigned char aux) const
{
	switch(aux)
	{
	case 0:
	default:
		return I18n::get("tile.twilight.sapling.oak.name");
	case 1:
		return I18n::get("tile.twilight.sapling.canopy.name");
	case 2:
		return I18n::get("tile.twilight.sapling.mangrove.name");
	case 3:
		return I18n::get("tile.twilight.sapling.darkwood.name");
	case 4:
		return I18n::get("tile.twilight.sapling.robustoak.name");
	case 5:
		return I18n::get("tile.twilight.sapling.time.name");
	case 6:
		return I18n::get("tile.twilight.sapling.trans.name");
	case 7:
		return I18n::get("tile.twilight.sapling.mine.name");
	case 8:
		return I18n::get("tile.twilight.sapling.sort.name");
	case 9:
		return I18n::get("tile.twilight.sapling.rainbow.name");


	}
}
void TwilightSapling::makeParticles(BlockSource&s,BlockPos const&pos,Random&r)const
{
	unsigned char particlesCount=10+r.nextInt(5);
	for(unsigned char mPos=0;mPos<particlesCount;++mPos)
		s.getLevel().addParticle((ParticleType)33,Vec3(pos.x+r.nextFloat(),pos.y+r.nextFloat(),pos.z+r.nextFloat()),Vec3(0,0,0),0);
}
bool TwilightSapling::waterSpreadCausesSpawn() const
{
	return true;
}