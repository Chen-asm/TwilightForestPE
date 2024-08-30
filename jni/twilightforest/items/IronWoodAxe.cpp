#include "IronWoodAxe.h"
IronWoodAxe::IronWoodAxe(std::string const& name,short id):Item(name,id)
{
      this->creativeCategory = 3;
      this->setMaxStackSize(1);
      this->setIcon("ironwood_axe",0);

}
int IronWoodAxe::getAttackDamage()
{
return 2000;
}

int IronWoodAxe::getEnchantSlot()const
{
    return 1024;
}
int IronWoodAxe::getEnchantValue()const 
{
    return 1024;
}
