#include "TwilightLeaf.h"

#include "mcpe/level/BlockSource.h"
#include "mcpe/item/ItemInstance.h"
#include "mcpe/block/blocks/FireBlock.h"
#include "mcpe/util/Random.h"
#include "mcpe/entity/player/Player.h"
#include "mcpe/client/resources/I18n.h"

#include "twilightforest/blocks/TwilightBlocks.h"


#include <stdlib.h>

TwilightLeaf::TwilightLeaf():Block("twilight.leaf",TwilightForest::TwilightBlocks::ID::mTwilightLeaf,Material::getMaterial(MaterialType::PLANT))
{
	init();
	setCategory(CreativeItemCategory::BLOCKS);
	setSolid(false);
	setExplodeable(1);
	setDestroyTime(0.2);
	setTicking(true);
	setVisualShape({0.001,0.001,0.001,1,1,1});
	renderLayer=mLeaves->renderLayer;
	
	((FireBlock*)mFire)->setFlammable(BlockID(TwilightForest::TwilightBlocks::ID::mTwilightLeaf),65,25);
}
int TwilightLeaf::getResource(Random&, int, int)const
{
	return TwilightForest::TwilightBlocks::ID::mTwilightSapling;
}
std::string TwilightLeaf::buildDescriptionName(unsigned char aux) const
{
	switch(aux)
	{
	case 0:
	default:
		return I18n::get("Leaf1");
	case 1:
		return I18n::get("Leaf2");
	case 2:
		return I18n::get("Leaf3");
	case 3:
		return I18n::get("Leaf4");
    case 4:
		return I18n::get("Leaf5");
	case 5:
		return I18n::get("Leaf6");
	case 6:
		return I18n::get("Leaf7");
    case 7:
        return I18n::get("Leaf8");
    case 8:
        return I18n::get("Leaf9");
	}
}
int TwilightLeaf::getResourceCount(Random&r, int, int)const
{
	return r.nextInt(10)==9?1:0;
}
ItemInstance TwilightLeaf::getSilkTouchItemInstance(unsigned char)const
{
	return ItemInstance(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,1,0);
}
void TwilightLeaf::onGraphicsModeChanged(bool, bool, bool)
{
	renderLayer=mLeaves->renderLayer;
}
int TwilightLeaf::getRenderLayer(BlockSource&s, BlockPos const&pos) const
{
	return mLeaves->getRenderLayer(s,pos);
}

int TwilightLeaf::getPlacementDataValue(Entity&, BlockPos const&, signed char, Vec3 const&, int) const
{
	return 4;
}

void TwilightLeaf::playerDestroy(Player*p, BlockPos const&pos, int aux)const
{
	if(p&&p->getSelectedItem()&&p->getSelectedItem()->getId()==359)
		popResource(p->getRegion(),pos,ItemInstance(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,1,0));
	else
		Block::playerDestroy(p,pos,aux);
}
