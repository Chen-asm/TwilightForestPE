#include "TwilightIronWoodIngot.h"
IronWoodIngot::IronWoodIngot(std::string const& itemname, short itemid):Item(itemname,itemid)
{
   

      this->creativeCategory = 3;
      this->setIcon("ironwood_ingot",0);
      this->setMaxStackSize(64);
      

}
