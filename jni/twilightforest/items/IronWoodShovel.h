#pragma once
#include "minecraftpe/world/material/Material.h"
#include "minecraftpe/world/item/ShovelItem.h"
class IronWoodShovel : public ShovelItem
{
public:
        IronWoodShovel(std::string const&, int, Item::Tier const&);
        virtual int getAttackDamage();
        //virtual bool canDestroySpecial(const Block *) const;
        //virtual float getDestroySpeed(ItemInstance*, Block*);
        virtual int getEnchantSlot() const;
        
};