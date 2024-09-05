#pragma once

struct Level;
struct Dimension;
struct ChunkSource;
struct ChunkPos;
#include "mcpe/util/ChunkBlockPos.h"
#include "mcpe/level/biome/Biome.h"
#include "mcpe/util/BlockID.h"
#include "ChunkState.h"
#include "mcpe/util/buffer_span.h"

class LevelChunk
{
	public:

	LevelChunk(Level&, Dimension&, const ChunkPos&, bool);

	void recalcHeightmap();
	ChunkPos& getPosition() const;
	
	void setUnsaved();
	void changeState(ChunkState, ChunkState);
	void _setGenerator(ChunkSource*);
	void setAllBlockIDs(buffer_span<BlockID>, short);
	void setBiome(const Biome&, const ChunkBlockPos&);
	Biome getBiome(ChunkBlockPos const&) const;

	
};
