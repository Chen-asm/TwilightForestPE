#include "TwilightBlocks.h"
#include "twilightforest/blocks/TwilightLogBlock.h"
#include "twilightforest/blocks/MagicLogBlock.h"
#include "mcpe/client/resources/I18n.h"
#include "twilightforest/blocks/TwilightSapling.h"
#include "twilightforest/blocks/TwilightRoot.h"
#include "twilightforest/blocks/TwilightStorageBlock.h"
#include "twilightforest/blocks/TwilightPlank.h"
#include "twilightforest/blocks/TwilightLeaf.h"
namespace TwilightForest
{
    void TwilightBlocks::initTwilightBlocks()
    {
        Block::mBlocks[ID::mTwilightLog]=new TwilightLogBlock();
        Block::mBlocks[ID::mMagicLog]=new MagicLogBlock();
        Block::mBlocks[ID::mTwilightSapling]=new TwilightSapling();
        Block::mBlocks[ID::mTwilightRoot]=new TwilightRoot();
        Block::mBlocks[ID::mTwilightStorageBlock]=new TwilightStorageBlock();
        Block::mBlocks[ID::mTwilightPlank]= new TwilightPlank();
        Block::mBlocks[ID::mTwilightLeaf]= new TwilightLeaf();
    }
}