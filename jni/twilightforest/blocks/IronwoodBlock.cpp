#include "IronWoodBlock.h"
IronWoodBlock::IronWoodBlock(std::string const & name,int id):WoodBlock(name,id)
{
    this->creativeCategory = 1;
    this->setDestroyTime(5.0f);//hardness
    this->setSoundType(Block::SOUND_WOOD);
    this->mSolid[210] = false;
    this->setLightEmission(1.0f);
    

    tex = getTextureUVCoordinateSet("ironwood_block",0);
    
    





}
const TextureUVCoordinateSet& IronWoodBlock::getTexture(signed char side)
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