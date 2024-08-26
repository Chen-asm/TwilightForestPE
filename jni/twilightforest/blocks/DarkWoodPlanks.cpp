#include "DarkWoodPlanks.h"
DarkWoodPlanks::DarkWoodPlanks(std::string const & name,int id):WoodBlock(name,id)
{
    this->creativeCategory = 1;
    this->setDestroyTime(5.0f);
    this->setSoundType(Block::SOUND_WOOD);
    

    tex = getTextureUVCoordinateSet("planks_darkwood",0);

}

const TextureUVCoordinateSet& DarkWoodPlanks::getTexture(signed char side)
{
   switch(side)
   {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    return tex;
    break;

   }
}