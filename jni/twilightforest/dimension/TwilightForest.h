#pragma once
#include "minecraftpe/world/level/dimension/Dimension.h"
#include "minecraftpe/world/level/dimension/NormalDimension.h"
class TwilightForest : public Dimension
{
	public:
    TwilightForest(Level&);
    virtual void init();
    virtual void tick();
    virtual bool isFoggyAt(int,int)const;
    virtual bool isDay() const;
    virtual bool hasGround() const;
    virtual float getTimeOfDay(int,float) const;
    virtual float getFogDistanceScale()const;
    virtual float getCloudHeight()const;
    virtual Color getFogColor(float)const;
    virtual bool isNaturalDimension() const;
    virtual bool mayRespawn()const;
    virtual bool isValidSpawn(int, int) const;
    virtual const std::string getName()const;
    //virtual void onBlockChanged(BlockSource&, const BlockPos&, FullBlock, FullBlock, int);
	virtual void onBlockEvent(BlockSource&, int, int, int, int, int);
	virtual void onNewChunkFor(Player&, LevelChunk&);
    

    /*
    virtual ~Dimension();
	virtual void onBlockChanged(BlockSource&, const BlockPos&, FullBlock, FullBlock, int);
	virtual void onBlockEvent(BlockSource&, int, int, int, int, int);
	virtual void onNewChunkFor(Player&, LevelChunk&);
	virtual void init();
	virtual void tick();
	virtual void updateLightRamp();
	virtual bool isNaturalDimension() const;
	virtual bool isValidSpawn(int, int) const;
	virtual bool isDay() const;
	virtual Color getFogColor(float) const;
	virtual float getFogDistanceScale() const;
	virtual bool isFoggyAt(int, int) const;
	virtual float getCloudHeight() const;
	virtual bool mayRespawn() const;
	virtual bool hasGround() const;
	virtual int getSpawnYPosition();
	virtual bool hasBedrockFog();
	virtual float getClearColorScale();
	virtual const std::string getName() const;
	virtual void load(const CompoundTag&);
	virtual void save(CompoundTag&);
	virtual void sendDimensionPackets();
	virtual void sendBroadcast(const Packet&, Player*);
	virtual void addMoveEntityPacket(const MoveEntityPacketData&);
	virtual void addSetEntityMotionPacket(Entity&);
	virtual float getTimeOfDay(int, float) const;

	std::unique_ptr<ChunkSource> _createGenerator(GeneratorType);
	const Vec3& getSkyColor(const Entity&, float);
	bool hasCeiling();
	void setCeiling(bool);
	bool isUltraWarm();
	void setUltraWarm(bool);
	Level& getLevel() const;
    
    */



};
