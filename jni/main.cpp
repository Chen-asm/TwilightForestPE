#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>
#include <substrate.h>
#include <string>
#include <memory>
#include "minecraftpe/world/item/ItemInstance.h"
#include "minecraftpe/world/level/block/Block.h"
#include "minecraftpe/client/renderer/renderer/MatrixStack.h"
#include "minecraftpe/world/item/Item.h"
#include "minecraftpe/world/item/ItemInstance.h"
#include "minecraftpe/client/MinecraftClient.h"
#include "minecraftpe/world/entity/player/Player.h"
#include "minecraftpe/Locale/I18n.h"
#include "minecraftpe/common/Common.h"
#include "minecraftpe/world/level/dimension/DimensionId.h"
#include "minecraftpe/world/level/dimension/NormalDimension.h"
#include "minecraftpe/world/level/dimension/HellDimension.h"
#include "minecraftpe/world/level/gen/RandomLevelSource.h"
#include "minecraftpe/world/level/gen/FlatLevelSource.h"
#include "minecraftpe/world/level/gen/HellRandomLevelSource.h"
#include "twilightforest/items/IronWoodPickaxe.h"
#include "twilightforest/items/IronWoodAxe.h"
#include "twilightforest/items/IronWoodShovel.h"
#include "twilightforest/items/SteeleafPickaxe.h"
#include "twilightforest/items/KnightlyPickaxe.h"
#include "twilightforest/items/MazeBreakerPickaxe.h"

#include "twilightforest/items/TwilightArcticFur.h"
#include "twilightforest/items/TwilightFeather.h"
#include "twilightforest/items/TwilightIronWoodIngot.h"
#include "twilightforest/biomes/TwilightBiome.h"
#include "twilightforest/dimension/TwilightForest.h"
#include "minecraftpe/world/level/GeneratorType.h"
#include "twilightforest/blocks/TwilightBlocks.h"
#include "twilightforest/creative/CreativeManager.h"
//#include "twilightforest/level/chunk/TwilightRandomLevelSource.h"
#include "minecraftpe/client/renderer/renderer/LevelRenderer.h"
#include "minecraftpe/client/renderer/Tessellator.h"
#include "minecraftpe/client/renderer/renderer/Mesh.h"
#include "minecraftpe/world/entity/player/ServerPlayer.h"
#include "minecraftpe/gamemode/GameMode.h"
#include "minecraftpe/world/entity/Entity.h"


std::string (*getGameVersionString_Real)(void);
std::string getGameVersionString_Hook(void)
{

	return "Twilight Forest is Load";
}
static void (*initBiomes_Real)(void);
static void initBiomes_Hook(void)
{
	initBiomes_Real();
	
}
 std::unique_ptr<Dimension> (*createNewDimension_Real)(DimensionId,Level&);
 std::unique_ptr<Dimension> createNewDimension_Hook(DimensionId dimensionId,Level& level)
{
	/*
	if(dimensionId == DimensionId::NETHER)
	{ //nether：there is a bug 
		return std::unique_ptr<Dimension>(new TwilightForest(level));
	}
	else if(dimensionId == DimensionId::OVERWORLD)
	{
        return std::unique_ptr<Dimension>(new NormalDimension(level));
	}
	*/
	return createNewDimension_Real(dimensionId,level);
}
static std::unique_ptr<ChunkSource> (*createGenerator_Real)(Dimension*,GeneratorType);
static std::unique_ptr<ChunkSource> createGenerator_Hook(Dimension* self,GeneratorType type)
{
	/*
	if(type == GeneratorType::HELL)
	{//hell
		return std::unique_ptr<ChunkSource>(new TwilightRandomLevelSource(&self->level, self, self->level.getSeed()));
	}
	else if(type == GeneratorType::LEGACY)
	{
		return std::unique_ptr<ChunkSource>(new RandomLevelSource(&self->level, self, self->level.getSeed(), true));
		//return std::unique_ptr<ChunkSource>(new HellRandomLevelSource(&self->level,self,self->level.getSeed()));
	}
	else if(type == GeneratorType::INFINITE)
	{
		return std::unique_ptr<ChunkSource>(new RandomLevelSource(&self->level, self, self->level.getSeed(), false));
	}
	else if(type == GeneratorType::FLAT)
	{//there is also a bug to load generator
		return std::unique_ptr<ChunkSource>(new FlatLevelSource(&self->level, self, FlatLevelSource::DEFAULT_LAYERS));
	}
	*/
	
	return createGenerator_Real(self,type);
}


void (*initBlocks_Real)();
void initBlocks_Hook() {
	initBlocks_Real();

	TwilightBlocks::initBlocks();
}

void (*initItems_Real)(void);
void initItems_Hook(void)
{
       Item::mItems[720] = new IronWoodIngot("ironwood_ingot",720 - 0x100);
       Item::mItems[721] = new ArcticFur("arctic_fur",721 - 0x100);
       Item::mItems[722] = new Feather("tffeather",722 - 0x100);
       Item::mItems[723] = new IronWoodPickaxe("ironwoodpickaxe",723 - 0x100,Item::Tier::IRON);
	   //Item::mItems[724] = new IronWoodAxe("ironwoodaxe",724 - 0x100);
	   //Item::mItems[724] = new IronWoodShovel("ironwoodshovel",724 - 0x100,Item::Tier::IRON);
	   Item::mItems[724] = new SteeleafPickaxe("steeleafpickaxe",724 - 0x100,Item::Tier::IRON);
	   Item::mItems[725] = new KnightlyPickaxe("knightlypickaxe",725 - 0x100,Item::Tier::STONE);
	   Item::mItems[726] = new MazeBreakerPickaxe("mazebreakerpickaxe",726 - 0x100,Item::Tier::STONE);
	   
	   initItems_Real();
    
}
void (*initCreativeItems_Real)();
void initCreativeItems_Hook() {
	initCreativeItems_Real();

    CreativeManager::registerCreativeItems();
    Item::addCreativeItem(720,0);
    Item::addCreativeItem(721,0);
    Item::addCreativeItem(722,0);
	Item::addCreativeItem(723,0);
	Item::addCreativeItem(724,0);
	//Item::addCreativeItem(725,0);
}



static std::string(*I18n_Real)(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
static std::string I18n_Hook(std::string const& key, std::vector<std::string, std::allocator<std::string>> const& a)
{
	
	if(key == "tile.canopywood.name") return "CanopyWood";
	else if(key == "tile.oakwood.name") return "OakWood";
	else if(key == "tile.darkwood.name") return "Darkwood";
	else if(key == "tile.mangrovewood.name") return "MangroveWood";
	else if(key == "tile.sortingwood.name") return "SortingWood";
	else if(key == "tile.minewood.name") return "MineWood";
    else if(key == "tile.transwood.name") return "TransWood";
	else if(key == "tile.timewood.name") return "TimeWood";
	else if(key == "tile.ironwoodblock.name") return "IronWoodBlock";
	else if(key == "tile.steelleafblock.name") return "SteelLeafBlock";
	

	//TODO...
	
	return I18n_Real(key, a);
}


JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	MSHookFunction((void*) &Common::getGameVersionString,(void*)&getGameVersionString_Hook,(void**)getGameVersionString_Real);
	MSHookFunction((void*) &Block::initBlocks, (void*) &initBlocks_Hook, (void**) &initBlocks_Real);
	MSHookFunction((void*) &Item::initItems,(void*)&initItems_Hook,(void**)&initItems_Real);
	MSHookFunction((void*) &Item::initCreativeItems, (void*) &initCreativeItems_Hook, (void**) &initCreativeItems_Real);
    MSHookFunction((void*) &I18n::get, (void*) &I18n_Hook, (void**) &I18n_Real);
	MSHookFunction((void*) &Biome::initBiomes, (void*) &initBiomes_Hook, (void**) &initBiomes_Real);
	MSHookFunction((void*) &Dimension::createNew, (void*) &createNewDimension_Hook, (void**) &createNewDimension_Real);
	MSHookFunction((void*) &Dimension::_createGenerator, (void*) &createGenerator_Hook, (void**) &createGenerator_Real);
	
	return JNI_VERSION_1_2;

}
