#pragma once
#include "Block.h"
#include <string>
class LeafBlock : public Block
{
    public:
        LeafBlock(std::string const&, int, std::string const&);
        
};