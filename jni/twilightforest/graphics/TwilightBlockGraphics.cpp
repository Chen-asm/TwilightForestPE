#include "TwilightBlockGraphics.h"

#include "mcpe/block/BlockGraphics.h"
#include "twilightforest/blocks/TwilightBlocks.h"
namespace TwilightForest
{
   void TwilightBlockGraphics::initTwilightBlockGraphics()
   {
    BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLog]=new BlockGraphics("dirt");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLog]->setTextureItem("twilight_log_top","twilight_log_top","twilight_log_side");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLog]->setSoundType(BlockSoundType::WOOD);
	
    BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mMagicLog]=new BlockGraphics("dirt");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mMagicLog]->setTextureItem("magic_log_top","magic_log_top","magic_log_side");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mMagicLog]->setSoundType(BlockSoundType::WOOD);
	
    BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightSapling]=new BlockGraphics("sapling");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightSapling]->setTextureItem("twilight_sapling");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightSapling]->setBlockShape(BlockShape::CROSS);
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightSapling]->setSoundType(BlockSoundType::GRASS);
   
    BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightRoot]=new BlockGraphics("dirt");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightRoot]->setTextureItem("twilight_root");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightRoot]->setSoundType(BlockSoundType::DIRT);
	
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock]=new BlockGraphics("dirt");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock]->setTextureItem("twilight_storage");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock]->setSoundType(BlockSoundType::GRASS);

	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightPlank]=new BlockGraphics("dirt");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightPlank]->setTextureItem("twilight_plank");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightPlank]->setSoundType(BlockSoundType::WOOD);
	
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLeaf]=new BlockGraphics("portal");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLeaf]->setTextureItem("twilight_leaf");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLeaf]->setCarriedTextureItem("twilight_leaf");
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLeaf]->setTextureIsotropic(1);
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLeaf]->setTextureIsotropic(0);
	BlockGraphics::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLeaf]->setSoundType(BlockSoundType::GRASS);
   }   
}
