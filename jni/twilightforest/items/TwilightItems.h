#pragma once

#include "mcpe/item/Item.h"

class TextureUVCoordinateSet;

namespace TwilightForest
{
class TwilightItems : public Item
{
public:
	class ID
	{
	public:
	
	};
public:
	//static void initTwilightItems();//所有物品
	static void addTwilightCreativeItems();

	//static void initTwilightItemItems();//纯物品，非方块物品
	static void initTwilightBlockItems();//方块物品
public:
	//static bool mTwilightItems[4096];
public:
	//Items(std::string const&,short);
public:
    //注册纯物品
	//static void registerItem(short,std::string const&,std::string const&,int);
	//static void registerItem(short,std::string const&,TextureUVCoordinateSet const&);
};
}