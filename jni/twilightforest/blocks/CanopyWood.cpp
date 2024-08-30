#include "CanopyWood.h"
#include "minecraftpe/Locale/I18n.h"
CanopyWood::CanopyWood(const std::string& name, int id):WoodBlock(name,id)
{
    this->creativeCategory = 1;
    this->setDestroyTime(5.0f);
    this->setSoundType(Block::SOUND_WOOD);
   
    

    top_tex = getTextureUVCoordinateSet("canopy_top",0);
    
    side_tex = getTextureUVCoordinateSet("canopy_side",0);





}
const TextureUVCoordinateSet& CanopyWood::getTexture(signed char side)
{
    /*
    if(side == 0)
  {
    //0是底部贴图
	return top_tex;
  }
  else if(side == 1)
  {
    //1是顶部贴图
    return down_tex;
  }
  else if(side == 2)
  {
    //2是右部贴图
	return left_tex;
  }
  else if(side == 3)
  {
    //3是左部贴图
	return right_tex;
  }
  else if(side == 4)
  {
    //4是前部贴图
	return towords_tex;
  }
  else if(side == 5)
  {
    //5是后部贴图
	return behind_tex;
  }
    
    
    */
   
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

