#include "MagicLogBlock.h"
#include "TwilightBlocks.h"
#include "mcpe/client/resources/I18n.h"
#include "mcpe/item/ItemInstance.h"

MagicLogBlock::MagicLogBlock():LogBlock("magic.log",TwilightForest::TwilightBlocks::ID::mMagicLog)
{
	
	setSolid(true);
	setDestroyTime(3);
	setExplodeable(15);
	setCategory(CreativeItemCategory::BLOCKS);
	
}
std::string MagicLogBlock::buildDescriptionName(unsigned char aux) const
{
	switch(aux)
	{
	case 0:
	default:
		return I18n::get("tile.magic.log.time.name");
	case 1:
		return I18n::get("tile.magic.log.trans.name");
	case 2:
		return I18n::get("tile.magic.log.mine.name");
	case 3:
		return I18n::get("tile.magic.log.sort.name");
	}
}
int MagicLogBlock::getSpawnResourcesAuxValue(unsigned char aux)const
{
	return aux;
}
int MagicLogBlock::getPlacementDataValue(Entity&, BlockPos const&, signed char, Vec3 const&, int aux)const
{
	return aux;
}