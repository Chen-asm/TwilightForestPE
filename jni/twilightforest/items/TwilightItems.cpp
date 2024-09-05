#include "TwilightItems.h"

#include "mcpe/item/BlockItem.h"
#include "mcpe/item/AuxDataBlockItem.h"
#include "mcpe/block/Block.h"
#include "mcpe/client/resources/I18n.h"
#include "twilightforest/blocks/TwilightBlocks.h"

namespace TwilightForest
{
    void TwilightItems::initTwilightBlockItems()
    {
        Item::mItems[TwilightForest::TwilightBlocks::ID::mTwilightLog]=new AuxDataBlockItem("twilight.log",TwilightForest::TwilightBlocks::ID::mTwilightLog-0x100,Block::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLog]);
        Item::mItems[TwilightForest::TwilightBlocks::ID::mMagicLog]=new AuxDataBlockItem("magic.log",TwilightForest::TwilightBlocks::ID::mMagicLog-0x100,Block::mBlocks[TwilightForest::TwilightBlocks::ID::mMagicLog]);
        Item::mItems[TwilightForest::TwilightBlocks::ID::mTwilightSapling]=new AuxDataBlockItem("twilight.sapling",TwilightForest::TwilightBlocks::ID::mTwilightSapling-0x100,Block::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightSapling]);
        Item::mItems[TwilightForest::TwilightBlocks::ID::mTwilightRoot]=new AuxDataBlockItem("twilight.root",TwilightForest::TwilightBlocks::ID::mTwilightRoot-0x100,Block::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightRoot]);
        Item::mItems[TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock] = new AuxDataBlockItem("twilight.storage",TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock-0x100,Block::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock]);
        Item::mItems[TwilightForest::TwilightBlocks::ID::mTwilightPlank] = new AuxDataBlockItem("twilight.plank",TwilightForest::TwilightBlocks::ID::mTwilightPlank-0x100,Block::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightPlank]);
        Item::mItems[TwilightForest::TwilightBlocks::ID::mTwilightLeaf] = new AuxDataBlockItem("twilight.leaf",TwilightForest::TwilightBlocks::ID::mTwilightLeaf-0x100,Block::mBlocks[TwilightForest::TwilightBlocks::ID::mTwilightLeaf]);
    }
    void TwilightItems::addTwilightCreativeItems()
    {
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLog,0);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLog,1);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLog,2);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLog,3);

        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mMagicLog,0);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mMagicLog,1);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mMagicLog,2);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mMagicLog,3);

        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightSapling,0);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightSapling,1);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightSapling,2);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightSapling,3);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightSapling,4);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightSapling,5);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightSapling,6);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightSapling,7);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightSapling,8);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightSapling,9);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightRoot,0);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightRoot,1);
        
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock,0);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock,1);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock,2);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock,3);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightStorageBlock,4);

        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightPlank,0);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightPlank,1);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightPlank,2);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightPlank,3);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightPlank,4);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightPlank,5);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightPlank,6);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightPlank,7);
        
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,0);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,1);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,2);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,3);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,4);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,5);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,6);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,7);
        Item::addCreativeItem(TwilightForest::TwilightBlocks::ID::mTwilightLeaf,8);

    }
}