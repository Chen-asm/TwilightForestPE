#include "jni.h"
#include "Substrate.h"
#include "mcpe/item/Item.h"
#include "mcpe/item/ItemInstance.h"
#include "mcpe/level/DimensionId.h"
#include "mcpe/level/Dimension.h"
#include "twilightforest/dimensions/TwilightForestDimension.h"
#include "mcpe/level/HellRandomLevelSource.h"
#include "twilightforest/blocks/TwilightBlocks.h"
#include "twilightforest/items/TwilightItems.h"
#include "twilightforest/graphics/TwilightBlockGraphics.h"
#include "mcpe/entity/player/ServerPlayer.h"


bool (*useOn_r)(ItemInstance*,Entity&, int, int, int, signed char, float, float, float);
bool useOn_k(ItemInstance*instance,Entity& ent, int x, int y, int z, signed char side, float xx, float yy, float zz){
 ServerPlayer& player=(ServerPlayer&)ent;
 if(instance->getId()==276){
  if(ent.getRegion().getDimensionId()==DimensionId::OVERWORLD){
   
   
   player.changeDimension(DimensionId::TheEnd);
  }
  else if(ent.getRegion().getDimensionId()==DimensionId::TheEnd){
   player.changeDimension(DimensionId::TwilightForest);
  }
 }
 else return useOn_r(instance,ent,x,y,z,side,xx,yy,zz);
}
void (*initCreativeItems_r)();
void initCreativeItems_k()
{
	initCreativeItems_r();
    TwilightForest::TwilightItems::addTwilightCreativeItems();
}
void (*initItems_r)();
void initItems_k()
{
    initItems_r();
    TwilightForest::TwilightItems::initTwilightBlockItems();

}
void (*initBlockGraphics_r)();
void initBlockGraphics_k()
{
    initBlockGraphics_r();
    TwilightForest::TwilightBlockGraphics::initTwilightBlockGraphics();
}
void (*initBlocks_r)();
void initBlocks_k()
{
    initBlocks_r();
    TwilightForest::TwilightBlocks::initTwilightBlocks();
}
std::unique_ptr<Dimension> (*createNew_r)(DimensionId,Level&);
std::unique_ptr<Dimension> createNew_k(DimensionId id,Level& level){

if(id==DimensionId::TwilightForest)
{
return std::unique_ptr<Dimension>(new TwilightForestDimension(level));
}
else
{
return createNew_r(id,level);
}
}
std::unique_ptr<ChunkSource> (*createGenerator_r)(Dimension*, GeneratorType);
std::unique_ptr<ChunkSource> createGenerator_k(Dimension* self, GeneratorType type){
 if(self->getId()==DimensionId::TwilightForest){
  return std::unique_ptr<ChunkSource>(new HellRandomLevelSource(&self->getLevel(),self,self->getLevel().getSeed()));
 }
 //return std::unique_ptr<ChunkSource>(new TwilightRandomLevelSource(self));
 else{
 return createGenerator_r(self,type);
 }
}
JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
MSHookFunction((void*)&Item::initCreativeItems,(void*)&initCreativeItems_k,(void**)&initCreativeItems_r);
MSHookFunction((void*)&Item::initClientData,(void*)&initItems_k,(void**)&initItems_r);
MSHookFunction((void*)&ItemInstance::useOn,(void*)&useOn_k,(void**)&useOn_r);
MSHookFunction((void*)&BlockGraphics::initBlocks,(void*)&initBlockGraphics_k,(void**)&initBlockGraphics_r);
MSHookFunction((void*)&Block::initBlocks,(void*)&initBlocks_k,(void**)&initBlocks_r);
MSHookFunction((void*)&Dimension::createNew,(void*)&createNew_k,(void**)&createNew_r);
MSHookFunction((void*)&Dimension::_createGenerator,(void*)&createGenerator_k,(void**)&createGenerator_r);

return JNI_VERSION_1_2;
}