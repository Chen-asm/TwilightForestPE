#pragma once
#include "minecraftpe/world/item/DiggerItem.h"
#include "minecraftpe/world/item/PickaxeItem.h"
#include "minecraftpe/world/material/Material.h"

class IronWoodPickaxe : public PickaxeItem
{
public:
        IronWoodPickaxe(const std::string&,int, const Item::Tier &);
        virtual int getAttackDamage();
        //virtual bool canDestroySpecial(const Block *) const;
        //virtual float getDestroySpeed(ItemInstance*, Block*);
        virtual int getEnchantSlot() const;
};