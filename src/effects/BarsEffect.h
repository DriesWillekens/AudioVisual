#pragma once
#include "effects/Effect.h"

namespace wavelab {

    class BarsEffect : public Effect
    {
    public:
        QString name() const override;
        void render(const QList<float> &bands) override;
    };

}