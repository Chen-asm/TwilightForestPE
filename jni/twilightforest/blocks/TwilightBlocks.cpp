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
#include "IronWoodBlock.h"
#include "SteelLeafBlock.h"
#include "FieryMetalBlock.h"
#include "CarminiteBlock.h"
#include "ArcticFurBlock.h" 
#include "TerrorcottaDiagonalBlock.h"
#include "TerrorcottaCircularBlock.h"
#include "OakPlanks.h"
#include "CanopyPlanks.h"
#include "MangrovePlanks.h"
#include "DarkWoodPlanks.h"
#include "TimeWoodPlanks.h"
#include "TransWoodPlanks.h"
#include "MineWoodPlanks.h"
#include "SortingWoodPlanks.h"


Block* TwilightBlocks::canopyWood;
Block* TwilightBlocks::oakWood;
Block* TwilightBlocks::darkWood;
Block* TwilightBlocks::mangroveWood;
Block* TwilightBlocks::sortingWood;
Block* TwilightBlocks::mineWood;
Block* TwilightBlocks::transWood;
Block* TwilightBlocks::timeWood;
Block* TwilightBlocks::ironWoodBlock;
Block* TwilightBlocks::steelLeafBlock;
Block* TwilightBlocks::fieryMetalBlock;
Block* TwilightBlocks::carminiteBlock;
Block* TwilightBlocks::arcticFurBlock;
Block* TwilightBlocks::terrorcottaDiagonalBlock;
Block* TwilightBlocks::terrorcottaCircularBlock;
Block* TwilightBlocks::oakPlanks;
Block* TwilightBlocks::canopyPlanks; 
Block* TwilightBlocks::mangrovePlanks;
Block* TwilightBlocks::darkWoodPlanks;
Block* TwilightBlocks::timeWoodPlanks;
Block* TwilightBlocks::transWoodPlanks;
Block* TwilightBlocks::mineWoodPlanks;
Block* TwilightBlocks::sortingWoodPlanks;
void TwilightBlocks::initBlocks() {

	
    canopyWood = new CanopyWood("canopywood",600);
	oakWood = new OakWood("oakwood",601);
    darkWood = new DarkWood("darkwood",602);
    mangroveWood = new MangroveWood("mangrovewood",603);
	sortingWood = new SortingWood("sortingwood",604);
	mineWood = new MineWood("minewood",605);
	transWood = new TransWood("transwood",606);
	timeWood = new TimeWood("timewood",607);
	ironWoodBlock = new IronWoodBlock("ironwoodblock",608);
	steelLeafBlock = new SteelLeafBlock("steelleafblock",609,Material::getMaterial(MaterialType::PLANT));
	fieryMetalBlock = new FieryMetalBlock("fierymetalblock",610,Material::getMaterial(MaterialType::IRON));
	carminiteBlock = new CarminiteBlock("carminiteblock",611,Material::getMaterial(MaterialType::IRON));
	arcticFurBlock = new ArcticFurBlock("arcticfurblock",612,Material::getMaterial(MaterialType::DECORATION));
	terrorcottaDiagonalBlock = new TerrorcottaDiagonalBlock("terrorcottadiagonalblock",613,Material::getMaterial(MaterialType::DECORATION));
	terrorcottaCircularBlock = new TerrorcottaCircularBlock("terrorcottacircularblock",614,Material::getMaterial(MaterialType::DECORATION));
	oakPlanks = new OakPlanks("oakplanks",615);
	canopyPlanks = new CanopyPlanks("canopyplanks",616);
	mangrovePlanks = new MangrovePlanks("mangroveplanks",617);
	darkWoodPlanks = new DarkWoodPlanks("darkwoodplanks",618);
	timeWoodPlanks = new TimeWoodPlanks("timewoodplanks",619);
	transWoodPlanks = new TransWoodPlanks("transwoodplanks",620);
	mineWoodPlanks = new MineWoodPlanks("minewoodplanks",621);
	sortingWoodPlanks = new SortingWoodPlanks("sortingwoodplanks",622);
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
	registerBlock(ironWoodBlock);
	registerBlock(steelLeafBlock);
	registerBlock(fieryMetalBlock);
	registerBlock(carminiteBlock);
	registerBlock(arcticFurBlock);
	registerBlock(terrorcottaDiagonalBlock);
	registerBlock(terrorcottaCircularBlock);
	registerBlock(oakPlanks);
	registerBlock(canopyPlanks);
	registerBlock(mangrovePlanks);
	registerBlock(darkWoodPlanks);
	registerBlock(timeWoodPlanks);
	registerBlock(transWoodPlanks);
	registerBlock(mineWoodPlanks);
	registerBlock(sortingWoodPlanks);

}
void TwilightBlocks::registerBlock(Block* block) {
	block->init();
	Block::mBlocks[block->blockId] = block;
	Item::mItems[block->blockId] = new BlockItem(block->getDescriptionId(), block->blockId - 0x100);
}