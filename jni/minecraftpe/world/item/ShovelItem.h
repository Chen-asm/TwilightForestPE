#pragma once

#include "DiggerItem.h"

class ShovelItem : public Item
{
public:
	ShovelItem(std::string const&, int, Item::Tier const&);
	virtual ~ShovelItem();
	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);
	virtual bool canDestroySpecial(const Block*) const;
};
