#include "TwilightRoot.h"
#include "TwilightBlocks.h"
#include "mcpe/client/resources/I18n.h"
#include "mcpe/item/ItemInstance.h"

TwilightRoot::TwilightRoot():Block("twilight.root",TwilightForest::TwilightBlocks::ID::mTwilightRoot,Material::getMaterial(MaterialType::DIRT))
{
	
	setSolid(true);
	setDestroyTime(3);
	setExplodeable(15);
	setCategory(CreativeItemCategory::BLOCKS);
	
}
std::string TwilightRoot::buildDescriptionName(unsigned char aux) const
{
	switch(aux)
	{
	case 0:
	default:
		return I18n::get("tile.twilight.root.roots.name");
	case 1:
		return I18n::get("tile.twilight.root.liveroots.name");

	}
}
int TwilightRoot::getSpawnResourcesAuxValue(unsigned char aux)const
{
	return aux;
}
int TwilightRoot::getPlacementDataValue(Entity&, BlockPos const&, signed char, Vec3 const&, int aux)const
{
	return aux;
}