#pragma once

#include "mcpe/block/Block.h"
namespace TwilightForest
{
    class TwilightBlocks : public Block
{
public:
	class ID
	{
	public:
		static const unsigned char mTwilightLog=212;
		static const unsigned char mMagicLog=213;
		static const unsigned char mTwilightSapling=214; 
		static const unsigned char mTwilightRoot=215;
		static const unsigned char mTwilightStorageBlock=216;
		static const unsigned char mTwilightPlank=217;
		static const unsigned char mTwilightLeaf=218;

	};
public:
	//static bool mTwilightBlocks[256];
public:
	static void initTwilightBlocks();
public:
	//Blocks(std::string const&,int,Material const&);
public:

};
}
