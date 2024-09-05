#pragma once
#include "Dimension.h"
class NormalDimension : public Dimension
{
    public:
    NormalDimension(Level&);
    BlockPos translatePosAcrossDimension(Vec3 const&, DimensionId) const;
    std::string getName() const;
    virtual ~NormalDimension();
};