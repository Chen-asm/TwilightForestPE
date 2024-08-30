#include "TwilightBlocks.h"
#include "minecraftpe/world/level/block/Block.h"
#include "minecraftpe/world/item/BlockItem.h"
#include "minecraftpe/world/item/AuxDataBlockItem.h"
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
#include "RootsBlock.h"
#include "LiveRoots.h"
#include "TwilightOakLeaves.h"


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
Block* TwilightBlocks::rootsBlock;
Block* TwilightBlocks::liveRoots;
Block* TwilightBlocks::twilightOakLeaves;





void TwilightBlocks::initBlocks() {

	
    canopyWood = new CanopyWood("canopywood",201);
	oakWood = new OakWood("oakwood",202);
    darkWood = new DarkWood("darkwood",203);
    mangroveWood = new MangroveWood("mangrovewood",204);
	sortingWood = new SortingWood("sortingwood",205);
	mineWood = new MineWood("minewood",206);
	transWood = new TransWood("transwood",207);
	timeWood = new TimeWood("timewood",208);
	ironWoodBlock = new IronWoodBlock("ironwoodblock",209);
	steelLeafBlock = new SteelLeafBlock("steelleafblock",210,Material::getMaterial(MaterialType::PLANT));
	fieryMetalBlock = new FieryMetalBlock("fierymetalblock",211,Material::getMaterial(MaterialType::IRON));
	carminiteBlock = new CarminiteBlock("carminiteblock",212,Material::getMaterial(MaterialType::IRON));
	arcticFurBlock = new ArcticFurBlock("arcticfurblock",213,Material::getMaterial(MaterialType::DECORATION));
	terrorcottaDiagonalBlock = new TerrorcottaDiagonalBlock("terrorcottadiagonalblock",214,Material::getMaterial(MaterialType::DECORATION));
	terrorcottaCircularBlock = new TerrorcottaCircularBlock("terrorcottacircularblock",215,Material::getMaterial(MaterialType::DECORATION));
	oakPlanks = new OakPlanks("oakplanks",216);
	canopyPlanks = new CanopyPlanks("canopyplanks",217);
	mangrovePlanks = new MangrovePlanks("mangroveplanks",218);
	darkWoodPlanks = new DarkWoodPlanks("darkwoodplanks",219);
	timeWoodPlanks = new TimeWoodPlanks("timewoodplanks",220);
	transWoodPlanks = new TransWoodPlanks("transwoodplanks",221);
	mineWoodPlanks = new MineWoodPlanks("minewoodplanks",222);
	sortingWoodPlanks = new SortingWoodPlanks("sortingwoodplanks",223);
	rootsBlock = new RootsBlock("rootsblock",224,Material::getMaterial(MaterialType::PLANT));
	liveRoots = new LiveRoots("liveroots",225,Material::getMaterial(MaterialType::PLANT));
	twilightOakLeaves = new TwilightOakLeaves("twilightoakleaves",226,Material::getMaterial(MaterialType::PLANT));
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
	registerBlock(rootsBlock);
	registerBlock(liveRoots);
	registerBlock(twilightOakLeaves);
	
	
}
void TwilightBlocks::registerBlock(Block* block) {
	block->init();
	Block::mBlocks[block->blockId] = block;
	Item::mItems[block->blockId] = new BlockItem(block->getDescriptionId(), block->blockId - 0x100);
}