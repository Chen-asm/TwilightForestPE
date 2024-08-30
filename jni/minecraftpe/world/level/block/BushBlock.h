#pragma once
#include "Block.h"
#include <string>
class BushBlock : public Block
{
    public:
        BushBlock(std::string const&, int, std::string const&, Material const&);
        bool mayPlace(BlockSource&, BlockPos const&, signed char);
        void growCrops(BlockSource&, BlockPos const&);
        void tick(BlockSource&, BlockPos const&, Random&);
        AABB* getAABB(BlockSource&, BlockPos const&, AABB&, int, bool, int);
        bool mayPlace(BlockSource&, BlockPos const&);
        void neighborChanged(BlockSource&, BlockPos const&, BlockPos const&);
        void checkAlive(BlockSource&, BlockPos const&);
};