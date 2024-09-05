#pragma once
#include <memory>
class LevelChunk;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class Level;
class ChunkSource
{
public:
	enum class LoadMode : int {
		NONE,
		DEFERRED,
		EMPTY
	};
	ChunkSource(Level*, Dimension*, int);
	ChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource> >);
	ChunkSource(ChunkSource&);
	
public:
	void loadChunk(LevelChunk&, bool);
	virtual LevelChunk* requestChunk(ChunkPos const&, ChunkSource::LoadMode);
	void postProcess(ChunkViewSource&);
	Level& getLevel() const;
	Dimension& getDimension() const;

};