#include "OakPlanks.h"
OakPlanks::OakPlanks(std::string const & name,int id):WoodBlock(name,id)
{
    this->creativeCategory = 1;
    this->setDestroyTime(5.0f);
    this->setSoundType(Block::SOUND_WOOD);
    this->mSolid[217] = false;

    tex = getTextureUVCoordinateSet("planks_twilight_oak",0);








}

const TextureUVCoordinateSet& OakPlanks::getTexture(signed char side)
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