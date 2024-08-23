#include "SteelLeafBlock.h"
SteelLeafBlock::SteelLeafBlock(std::string const& name, int id, Material const& material):Block(name,id,material)
{
  this->creativeCategory = 1;
  tex = getTextureUVCoordinateSet("steelleaf_block",0);
  this->setDestroyTime(5.0f);
  this->setExplodeable(10.0f);
  this->setLightEmission(1.0f);
}
const TextureUVCoordinateSet& SteelLeafBlock::getTexture(signed char side)
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
