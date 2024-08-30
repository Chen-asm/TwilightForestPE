#pragma once
#include "minecraftpe/world/material/Material.h"
#include "minecraftpe/world/item/Item.h"
class IronWoodAxe : public Item
{
public:
        IronWoodAxe(std::string const&,short);
        virtual int getAttackDamage();
        //virtual bool canDestroySpecial(const Block *) const;
        //virtual float getDestroySpeed(ItemInstance*, Block*);
        virtual int getEnchantSlot() const;
        virtual int getEnchantValue() const;
};