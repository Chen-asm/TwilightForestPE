#include "CreativeManager.h"
#include "../blocks/TwilightBlocks.h"
#include "minecraftpe/world/item/Item.h"

void CreativeManager::registerCreativeItems() {

	Item::addCreativeItem(TwilightBlocks::canopyWood,0);
	Item::addCreativeItem(TwilightBlocks::oakWood,0);
	Item::addCreativeItem(TwilightBlocks::darkWood,0);
	Item::addCreativeItem(TwilightBlocks::mangroveWood,0);
	Item::addCreativeItem(TwilightBlocks::sortingWood,0);
	Item::addCreativeItem(TwilightBlocks::mineWood,0);
	Item::addCreativeItem(TwilightBlocks::transWood,0);
	Item::addCreativeItem(TwilightBlocks::timeWood,0);
}
