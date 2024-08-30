#pragma once

#include "DiggerItem.h"

class HatchetItem : public DiggerItem
{
public:
	HatchetItem(std::string const&, int, Item::Tier const&);
	virtual ~HatchetItem();
	virtual float getDestroySpeed(ItemInstance *, Block *);
};
