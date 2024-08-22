#include "TwilightArcticFur.h"
ArcticFur::ArcticFur(std::string const& itemname,short itemid):Item(itemname,itemid)
{
	this->creativeCategory = 3;
	this->setIcon("arctic_fur",0);
	this->setMaxStackSize(64);


}
