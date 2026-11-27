#include "effects/BarsEffect.h"

namespace wavelab {

    QString BarsEffect::name() const
    {
        return "Bars";
    }

    void BarsEffect::render(const QList<float> &bands)
    {
        Q_UNUSED(bands);
        // Komt in stap 4
    }

}