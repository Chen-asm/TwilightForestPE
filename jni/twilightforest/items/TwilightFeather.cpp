#include "TwilightFeather.h"
Feather::Feather(std::string const& itemname,short itemid):Item(itemname,itemid)
{
	this->creativeCategory = 3;
	this->setIcon("tffeather",0);
	this->setMaxStackSize(64);

}
