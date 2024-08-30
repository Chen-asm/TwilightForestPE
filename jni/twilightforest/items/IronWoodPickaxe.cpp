#include "IronWoodPickaxe.h"
IronWoodPickaxe::IronWoodPickaxe(const std::string& name,int id,const Item::Tier& tier):PickaxeItem(name,id,tier)
{
      this->creativeCategory = 3;
      this->setMaxStackSize(1);
      this->setIcon("ironwood_pick",0);

}
int IronWoodPickaxe::getAttackDamage()
{
return 2000;
}

int IronWoodPickaxe::getEnchantSlot()const
{
    return 1024;
}
