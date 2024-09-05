#include "TwilightPlank.h"
#include "TwilightBlocks.h"
#include "mcpe/client/resources/I18n.h"
#include "mcpe/item/ItemInstance.h"

TwilightPlank::TwilightPlank():Block("twilight.plank",TwilightForest::TwilightBlocks::ID::mTwilightPlank,Material::getMaterial(MaterialType::WOOD))
{
	
	setSolid(true);
	setDestroyTime(3);
	setExplodeable(15);
	setCategory(CreativeItemCategory::BLOCKS);
	
}
std::string TwilightPlank::buildDescriptionName(unsigned char aux) const
{
	switch(aux)
	{
	case 0:
	default:
		return I18n::get("Plank1");
	case 1:
		return I18n::get("Plank2");
	case 2:
		return I18n::get("Plank3");
	case 3:
		return I18n::get("Plank4");
    case 4:
		return I18n::get("Plank5");
	case 5:
		return I18n::get("Plank6");
	case 6:
		return I18n::get("Plank7");
    case 7:
        return I18n::get("Plank8");
	}
}
int TwilightPlank::getSpawnResourcesAuxValue(unsigned char aux)const
{
	return aux;
}
int TwilightPlank::getPlacementDataValue(Entity&, BlockPos const&, signed char, Vec3 const&, int aux)const
{
	return aux;
}