#pragma once

#include "Item.h"

class WeaponItem : public Item
{
public:
	float f1;
	const Item::Tier& tier;
public:
	virtual ~WeaponItem();
	virtual ItemInstance* use(ItemInstance &, Player &);
	
	virtual float getDestroySpeed(ItemInstance *, Block *);
	virtual bool canDestroySpecial(const Block *) const;
	virtual int getAttackDamage();
	virtual void hurtEnemy(ItemInstance *, Mob *, Mob *);
	virtual bool mineBlock(ItemInstance*, BlockID, int, int, int, Mob*);
	virtual bool isHandEquipped() const;
};
