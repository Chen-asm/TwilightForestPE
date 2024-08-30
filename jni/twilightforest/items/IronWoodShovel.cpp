#include "IronWoodShovel.h"
IronWoodShovel::IronWoodShovel(const std::string& name,int id,const Item::Tier& tier):ShovelItem(name,id,tier)
{
      this->creativeCategory = 3;
      this->setMaxStackSize(1);
      this->setIcon("ironwood_shovel",0);

}
int IronWoodShovel::getAttackDamage()
{
return 2000;
}

int IronWoodShovel::getEnchantSlot()const
{
    return 1024;
}
