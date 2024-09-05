#include "mcpe/level/NormalDimension.h"
#include "mcpe/level/biome/Biome.h"
#include "mcpe/level/Level.h"

class TwilightForestDimension:public NormalDimension{
public:

    TwilightForestDimension(Level&);
    virtual ~TwilightForestDimension();
	virtual void init();
	virtual void tick();
	virtual Color getFogColor(float) const;
	virtual float getFogDistanceScale() const;
	virtual long getTimeOfDay(int,float) const;
	virtual bool isFoggyAt(int,int) const;
	virtual bool isNaturalDimension() const;
	virtual bool isValidSpawn(int,int) const;
	virtual bool isDay() const;
	virtual bool hasGround() const;
	virtual bool mayRespawn() const;
	virtual bool showSky() const;
	virtual DimensionId getId() const;
	virtual  std::string getName() const;
};