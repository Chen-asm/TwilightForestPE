#pragma once
#include "Vec2.h"
#include "Vec3.h"
#include "Random.h"

class PerlinNoise
{
public:
void _init(Random&);
PerlinNoise(Random&, int, int);
PerlinNoise(int);
PerlinNoise(unsigned int, int, int);
~PerlinNoise();

int getValue(Vec3 const&) const;
bool hashCode() const;
float* getRegion(float*, Vec2 const&, int, int, Vec2 const&, float) const;
float* getRegion(float*, Vec3 const&, int, int, int, Vec3 const&) const;
};