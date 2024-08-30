#include "KnightlyPickaxe.h"
KnightlyPickaxe::KnightlyPickaxe(const std::string& name,int id,const Item::Tier& tier):PickaxeItem(name,id,tier)
{
      this->creativeCategory = 3;
      this->setMaxStackSize(1);
      this->setIcon("knightly_pick",0);

}
int KnightlyPickaxe::getAttackDamage()
{
return 3000;
}

int KnightlyPickaxe::getEnchantSlot()const
{
    return 1024;
}