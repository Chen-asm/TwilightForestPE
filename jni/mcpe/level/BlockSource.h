#pragma once

#include <memory>
#include "../blockentity/BlockEntity.h"
#include "../util/Brightness.h"
#include "../block/material/MaterialType.h"
#include "../block/material/Material.h"
#include "../block/BlockSupportType.h"
#include "../entity/EntityType.h"
#include "LightLayer.h"
#include "DimensionId.h"

class Color;
class Level;
class ChunkSource;
class BlockPos;
class BlockID;
class BlockTickingQueue;
class LevelChunk;
class FullBlock;
class HitResult;
class Vec3;
class AABB;
class Material;
class BlockEntity;
class LightLayer;
class ChunkPos;
class Bounds;
class Dimension;
class BlockSourceListener;
class Biome;
class Entity;


class BlockSource
{
public:
	BlockSource(Level &, Dimension &, ChunkSource &, bool, bool);
	virtual ~BlockSource();
	Biome* getBiome(BlockPos const&);
	Dimension& getDimension();
	BlockEntity* getBlockEntity(BlockPos const&);
	FullBlock getBlockAndData(BlockPos const&);
	void setBlockAndData(BlockPos const&, FullBlock, int, Entity*);
	Block* getBlock(BlockPos const&);
	bool hasBlock(BlockPos const&);
	Level& getLevel();
	bool hasChunksAt(AABB const&);
	bool isEmptyBlock(BlockPos const&);
	Block* getBlockAndData(int, int, int);
	void updateNeighborsAt(BlockPos const&);
	Block* getAboveTopSolidBlock(BlockPos const&, bool, bool);
	LevelChunk* getChunkAt(BlockPos const&);
	ChunkSource& getChunkSource();
	BlockID getBlockID(BlockPos const&);
	void removeBlock(int, int, int);
	int getData(BlockPos const&);
	void fetchAABBs(AABB const&, bool);
	void fetchCollisionShapes(BlockSource&, AABB const&, float*, bool, Entity*);
	void getEntities(EntityType, AABB const&, Entity*);
	void checkBlockPermissions(Entity&, BlockPos const&, bool);
	void checkBlockDestroyPermissions(Entity&, BlockPos const&, bool);
	void getEntities(Entity*, AABB const&);
	Entity* getNearestEntityNotOfType(Entity*, Vec3 const&, float, EntityType);
	Block* getBlock(int, int, int);
	BlockID getBlockID(int, int, int);
	int getData(int, int, int);
	void setBlock(int, int, int, BlockID, int);
	bool canSeeSky(BlockPos const&);
	bool canSeeSky(int, int, int);
	Material const& getMaterial(int, int, int);
	Entity* getNearestEntityOfType(Entity*, AABB const&, EntityType);
	void setBlock(BlockPos const&, BlockID, int);
	void clip(Vec3 const&, Vec3 const&, bool, bool, int, bool);
	bool isSolidBlockingBlock(BlockPos const&);
	Brightness getBrightness(BlockPos const&);
	bool isEmptyBlock(int, int, int);
	Brightness getRawBrightness(int, int, int, bool);
	bool isSolidBlockingBlock(int, int, int);
	Material const& getMaterial(BlockPos const&);
	bool isUnobstructedByEntities(AABB const&, Entity*);
	DimensionId getDimensionId() const;
	void removeBlock(BlockPos const&);
	void isConsideredSolidBlock(BlockPos const&);
	Dimension const& getDimensionConst() const;
	bool hasChunksAt(BlockPos const&, int);
	bool containsAnyLiquid(AABB const&);
	bool hasChunksAt(BlockPos const&, BlockPos const&);
	bool hasBorderBlock(BlockPos);
	bool containsMaterial(AABB const&, MaterialType);
	bool containsFireBlock(AABB const&);
	void fireEntityChanged(Entity&);
	LevelChunk* getChunk(ChunkPos const&);
	bool isInWall(Vec3 const&);
	void containsAnySolidBlocking(AABB const&);
	void setBlockAndData(int, int, int, FullBlock, int);
	bool canSeeSkyFromBelowWater(BlockPos);
	Brightness getBrightness(LightLayer const&, BlockPos const&);
	Brightness getRawBrightness(BlockPos const&, bool);
	void setBlockAndData(BlockPos const&, BlockID, unsigned char, int, Entity*);
	bool containsLiquid(AABB const&, MaterialType);
	Block* getAboveTopSolidBlock(int, int, bool, bool);
	bool canProvideSupport(BlockPos const&, signed char, BlockSupportType);
	bool mayPlace(BlockID, BlockPos const&, signed char, Entity*, bool, Entity*);
	Dimension& getDimension() const;
	Level& getLevel() const;
	void setBlockAndData(int, int, int, BlockID, unsigned char, int);
	void shouldFireEvents(LevelChunk&) const;
	void blockEvent(BlockPos const&, int, int);
	void getHeightmap(BlockPos const&);
	void getHeightmap(int, int);
	void getHeightmapPos(BlockPos const&);
	void getTickQueue(BlockPos const&);
	void getMobsAt(EntityType, BlockPos const&);
	void setBorderBlock(BlockPos const&, bool);
	void fireBlocksDirty(BlockPos const&, BlockPos const&);
	void setBlockAndDataNoUpdate(int, int, int, FullBlock);
	void fireBlockChanged(BlockPos const&, FullBlock, FullBlock, int, Entity*);
	void updateNeighborsAtExceptFromFacing(BlockPos const&, BlockPos const&, int);
	void fireBlockEntityChanged(BlockEntity&);
	void setBlockAndData(BlockPos const&, FullBlock, int, Entity*, std::unique_ptr<BlockEntity, std::default_delete<BlockEntity> >);
	BlockEntity* getBlockEntity(int, int, int);
	void removeBlockEntity(BlockPos const&);
	bool isHumidAt(BlockPos const&);
	Color getGrassColor(BlockPos const&);
	Biome* tryGetBiome(BlockPos const&);
	BlockSource& getPublicSource() const;
	Level const& getLevelConst() const;
	void setBlockNoUpdate(int, int, int, BlockID);
	unsigned short getExtraData(BlockPos const&);
	void setExtraData(BlockPos const&, unsigned short);
	bool _isWaterAt(BlockPos const&);
	void blockEvent(int, int, int, int, int);
	LevelChunk* getChunkAt(int, int, int);
	void shouldThaw(BlockPos const&, bool);
	void addListener(BlockSourceListener&);
	void containsAny(BlockPos const&, BlockPos const&);
	Block* getTopBlock(int, int&, int);
	bool hasChunksAt(Bounds const&);
	bool hasChunksAt(int, int, int, int);
	void addVoidFloor(AABB const&);
	bool shouldFreeze(BlockPos const&, bool);
	void _blockChanged(BlockPos const&, FullBlock, FullBlock, int, Entity*);
	float _getSkyDarken();
	Brightness getBrightness(LightLayer const&, int, int, int);
	Brightness getBrightness(int, int, int);
	Color getLightColor(BlockPos const&, Brightness);
	void setBrightness(LightLayer const&, BlockPos const&, Brightness);
	void setBrightness(LightLayer const&, int, int, int, Brightness);
	void setGrassColor(int, BlockPos const&, int);
	void fireBlockEvent(int, int, int, int, int);
	void getSeenPercent(Vec3 const&, AABB const&);
	void removeListener(BlockSourceListener&);
	void fireAreaChanged(BlockPos const&, BlockPos const&);
	void neighborChanged(BlockPos const&, BlockPos const&);
	void runLightUpdates(LightLayer const&, BlockPos const&, BlockPos const&);
	void setTickingQueue(BlockTickingQueue&);
	void _fireColumnDirty(int, int, int, int, int);
	LevelChunk* getWritableChunk(ChunkPos const&);
	void onChunkDiscarded(LevelChunk&);
	bool isSnowTemperature(BlockPos const&);
	void updateNeighborsAt(BlockPos const&, BlockPos const&);
	BlockPos getTopRainBlockPos(BlockPos const&);
	void _getBlockPermissions(BlockPos const&, bool);
	void clearCachedLastChunk();
	void getAllocatedHeightAt(BlockPos const&);
	void fetchBorderBlockAABBs(AABB const&);
	void fireBrightnessChanged(BlockPos const&);
	bool isPositionUnderLiquid(BlockPos const&, MaterialType);
	void addUnloadedChunksAABBs(AABB const&);
	bool checkIsTopRainBlockPos(BlockPos const&);
	void fireBlockEntityRemoved(std::unique_ptr<BlockEntity, std::default_delete<BlockEntity> >);
	Entity* getNearestEntityOfType(Entity*, Vec3 const&, float, EntityType);
	bool isConsideredSolidBlock(int, int, int);
	void updateLightIfOtherThan(LightLayer const&, BlockPos const&, Brightness);
	void findNextSpawnBlockUnder(BlockPos&);
	void fetchBorderBlockCollisions(BlockSource&, AABB const&, Entity*);
	void findNextTopSolidBlockUnder(BlockPos&);
	bool shouldFreezeIgnoreNeighbors(BlockPos const&);
	bool _isIceAt(BlockPos const&);
	LevelChunk* getChunk(int, int);
	bool hasBlock(int, int, int);
	bool isOwnerThread() const;

};
