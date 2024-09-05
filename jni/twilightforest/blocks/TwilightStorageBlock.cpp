#include "TwilightStorageBlock.h"
#include "TwilightBlocks.h"
#include "mcpe/client/resources/I18n.h"
#include "mcpe/item/ItemInstance.h"

TwilightStorageBlock::TwilightStorageBlock():Block("twilight.storage",TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock,Material::getMaterial(MaterialType::DECORATION))
{
	
	setSolid(true);
	setDestroyTime(5);
	setExplodeable(10);
	setCategory(CreativeItemCategory::BLOCKS);
	
}
std::string TwilightStorageBlock::buildDescriptionName(unsigned char aux) const
{
	switch(aux)
	{
	case 0:
	default:
		return I18n::get("tile.twilight.storage.0.name");
	case 1:
		return I18n::get("tile.twilight.storage.1.name");
    case 2:
	
		return I18n::get("tile.twilight.storage.2.name");
	case 3:
		return I18n::get("tile.twilight.storage.3.name");

	}
}
int TwilightStorageBlock::getSpawnResourcesAuxValue(unsigned char aux)const
{
	return aux;
}
int TwilightStorageBlock::getPlacementDataValue(Entity&, BlockPos const&, signed char, Vec3 const&, int aux)const
{
	return aux;
}