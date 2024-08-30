#include "MineWood.h"
MineWood::MineWood(std::string const & name,int id):WoodBlock(name,id)
{
    this->creativeCategory = 1;
    this->setDestroyTime(5.0f);
    this->setSoundType(Block::SOUND_WOOD);
   
    

    top_tex = getTextureUVCoordinateSet("mine_section",0);
    
    side_tex = getTextureUVCoordinateSet("mine_side",0);





}
const TextureUVCoordinateSet& MineWood::getTexture(signed char side)
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