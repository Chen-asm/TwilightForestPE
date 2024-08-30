#pragma once

#include "Item.h"

class BlockSource;
class HangingEntity;
class EntityType;

// Size : 76
class HangingEntityItem : public Item
{
public:
	int entityTypeId;		// 72

public:
	HangingEntityItem(std::string const&, int, EntityType);
	virtual ~HangingEntityItem();
	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);
	HangingEntity *createEntity(BlockSource &, int, int, int, int);
};
