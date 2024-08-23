#include "TimeWood.h"
TimeWood::TimeWood(std::string const & name,int id):WoodBlock(name,id)
{
    this->creativeCategory = 1;
    this->setDestroyTime(5.0f);
    this->setSoundType(Block::SOUND_WOOD);
    this->mSolid[209] = false;
    this->setLightEmission(1.0f);

    top_tex = getTextureUVCoordinateSet("time_section",0);
    
    side_tex = getTextureUVCoordinateSet("time_side",0);





}
const TextureUVCoordinateSet& TimeWood::getTexture(signed char side)
{
 
   
   switch(side)
   {
    case 0:
    return top_tex;
    break;
    case 1:
    return top_tex;
    break;
    case 2:
    case 3:
    case 4:
    case 5:
    return side_tex;
    break;

   }
}
