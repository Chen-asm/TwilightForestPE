#include "TerrorcottaDiagonalBlock.h"
TerrorcottaDiagonalBlock::TerrorcottaDiagonalBlock(std::string const& name, int id, Material const& material):Block(name,id,material)
{
  this->creativeCategory = 1;
  tex = getTextureUVCoordinateSet("terrorcotta",0);
  this->setDestroyTime(5.0f);
  this->setExplodeable(10.0f);
  this->setLightEmission(1.0f);
}
const TextureUVCoordinateSet& TerrorcottaDiagonalBlock::getTexture(signed char side)
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