#include "MazeBreakerPickaxe.h"
MazeBreakerPickaxe::MazeBreakerPickaxe(const std::string& name,int id,const Item::Tier& tier):PickaxeItem(name,id,tier)
{
      this->creativeCategory = 3;
      this->setMaxStackSize(1);
      this->setIcon("mazebreaker_pick",0);

}
int MazeBreakerPickaxe::getAttackDamage()
{
return 3000;
}

int MazeBreakerPickaxe::getEnchantSlot()const
{
    return 1024;
}