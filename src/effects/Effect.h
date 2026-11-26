#pragma once
#include <QList>
#include <QString>

namespace wavelab {

    class Effect
    {
    public:
        virtual ~Effect() = default;
        virtual QString name() const = 0;
        virtual void render(const QList<float> &bands) = 0;
    };
}