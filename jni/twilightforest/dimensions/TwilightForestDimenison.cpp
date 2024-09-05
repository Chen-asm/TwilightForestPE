#include "TwilightForestDimension.h"


TwilightForestDimension::TwilightForestDimension(Level& level):NormalDimension(level){
this->Id = DimensionId::TwilightForest;
};
TwilightForestDimension::~TwilightForestDimension(){

};
void TwilightForestDimension::init(){
	Dimension::init();
	setCeiling(true);
	setUltraWarm(false);
}

void TwilightForestDimension::tick(){
 
};
Color TwilightForestDimension::getFogColor(float) const{
 return Color::CYAN;
};
float TwilightForestDimension::getFogDistanceScale() const{
 return (float)160;
};
long TwilightForestDimension::getTimeOfDay(int i,float f) const{
 return 0.3f;
};
bool TwilightForestDimension::isFoggyAt(int,int) const{
 return true;
};
bool TwilightForestDimension::isNaturalDimension() const{
 return true;
};
bool TwilightForestDimension::isValidSpawn(int,int) const{
 return true;
};
bool TwilightForestDimension::isDay() const{
 return false;
};
bool TwilightForestDimension::mayRespawn() const{
 return true;
};
bool TwilightForestDimension::showSky() const{
 return true;
};
bool TwilightForestDimension::hasGround() const{
 return true;
};
DimensionId TwilightForestDimension::getId()const
{
	return this->Id;
}
std::string TwilightForestDimension::getName() const{
	return "TwilightForest";
}