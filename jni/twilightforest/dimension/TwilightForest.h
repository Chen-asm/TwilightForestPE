#pragma once
#include "minecraftpe/world/level/dimension/Dimension.h"
#include "minecraftpe/world/level/dimension/NormalDimension.h"
class TwilightForest : public Dimension
{
    //It would be better if TwilightForest inherited NormalDimension...
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
    const std::string getName()const;



};
