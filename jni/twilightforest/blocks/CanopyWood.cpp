#include "CanopyWood.h"
CanopyWood::CanopyWood(std::string const & name,int id):WoodBlock(name,id)
{
    this->creativeCategory = 1;
    this->setDestroyTime(5.0f);
    this->setSoundType(Block::SOUND_WOOD);
    this->mSolid[202] = false;
    this->setLightEmission(1.0f);
    

    top_tex = getTextureUVCoordinateSet("canopy_top",0);
    
    side_tex = getTextureUVCoordinateSet("canopy_side",0);





}
const TextureUVCoordinateSet& CanopyWood::getTexture(signed char side)
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
