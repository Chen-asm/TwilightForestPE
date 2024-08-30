#pragma once

#include "Item.h"

class DiggerItem : public Item
{
public:
	virtual ~DiggerItem();
	virtual float getDestroySpeed(ItemInstance *, Block *);
	virtual int getAttackDamage();
	virtual void hurtEnemy(ItemInstance *, Mob *, Mob *);
	virtual bool mineBlock(ItemInstance*, BlockID, int, int, int, Mob*);
	virtual bool isHandEquipped() const;
};
