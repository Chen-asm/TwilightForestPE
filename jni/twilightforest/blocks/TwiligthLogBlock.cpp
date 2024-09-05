#include "TwilightLogBlock.h"
#include "TwilightBlocks.h"
#include "mcpe/client/resources/I18n.h"
#include "mcpe/item/ItemInstance.h"

TwilightLogBlock::TwilightLogBlock():LogBlock("twilight.log",TwilightForest::TwilightBlocks::ID::mTwilightLog)
{
	
	setSolid(true);
	setDestroyTime(3);
	setExplodeable(15);
	setCategory(CreativeItemCategory::BLOCKS);
	
}
std::string TwilightLogBlock::buildDescriptionName(unsigned char aux) const
{
	switch(aux)
	{
	case 0:
	default:
		return I18n::get("tile.twilight.log.canopy.name");
	case 1:
		return I18n::get("tile.twilight.log.oak.name");
	case 2:
		return I18n::get("tile.twilight.log.mangrove.name");
	case 3:
		return I18n::get("tile.twilight.log.darkwood.name");
	}
}
int TwilightLogBlock::getSpawnResourcesAuxValue(unsigned char aux)const
{
	return aux;
}
int TwilightLogBlock::getPlacementDataValue(Entity&, BlockPos const&, signed char, Vec3 const&, int aux)const
{
	return aux;
}