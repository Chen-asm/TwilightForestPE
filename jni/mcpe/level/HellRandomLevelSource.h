#pragma once
#include "mcpe/level/ChunkSource.h"
#include "mcpe/level/Level.h"
#include "mcpe/level/Dimension.h"
class HellRandomLevelSource : public ChunkSource
{ public:
HellRandomLevelSource(Level*, Dimension*, unsigned int);
};