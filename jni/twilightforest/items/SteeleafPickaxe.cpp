#include "SteeleafPickaxe.h"
SteeleafPickaxe::SteeleafPickaxe(const std::string& name,int id,const Item::Tier& tier):PickaxeItem(name,id,tier)
{
      this->creativeCategory = 3;
      this->setMaxStackSize(1);
      this->setIcon("steeleaf_pick",0);

}
int SteeleafPickaxe::getAttackDamage()
{
return 3000;
}

int SteeleafPickaxe::getEnchantSlot()const
{
    return 1024;
}