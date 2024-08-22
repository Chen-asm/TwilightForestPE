#include "TwilightBlocks.h"
#include "minecraftpe/world/level/block/Block.h"
#include "minecraftpe/world/item/BlockItem.h"
#include "minecraftpe/world/material/Material.h"
#include "CanopyWood.h"
#include "OakWood.h"
#include "DarkWood.h"
#include "MangroveWood.h"
#include "SortingWood.h"
#include "MineWood.h"
#include "TransWood.h"
#include "TimeWood.h"

Block* TwilightBlocks::canopyWood;
Block* TwilightBlocks::oakWood;
Block* TwilightBlocks::darkWood;
Block* TwilightBlocks::mangroveWood;
Block* TwilightBlocks::sortingWood;
Block* TwilightBlocks::mineWood;
Block* TwilightBlocks::transWood;
Block* TwilightBlocks::timeWood;

void TwilightBlocks::initBlocks() {

	
    canopyWood = new CanopyWood("canopywood",202);
	oakWood = new OakWood("oakwood",203);
    darkWood = new DarkWood("darkwood",204);
    mangroveWood = new MangroveWood("mangrovewood",205);
	sortingWood = new SortingWood("sortingwood",206);
	mineWood = new MineWood("minewood",207);
	transWood = new TransWood("transwood",208);
	timeWood = new TimeWood("timewood",209);
	registerBlocks();
}

void TwilightBlocks::registerBlocks() {

    registerBlock(canopyWood);
	registerBlock(oakWood);
	registerBlock(darkWood);
	registerBlock(mangroveWood);
	registerBlock(sortingWood);
	registerBlock(mineWood);
	registerBlock(transWood);
	registerBlock(timeWood);

}
void TwilightBlocks::registerBlock(Block* block) {
	block->init();
	Block::mBlocks[block->blockId] = block;
	Item::mItems[block->blockId] = new BlockItem(block->getDescriptionId(), block->blockId - 0x100);
}