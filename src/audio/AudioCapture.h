#pragma once
#include <QObject>
#include <QList>

namespace wavelab {

    class AudioCapture : public QObject
    {
        Q_OBJECT
    public:
        explicit AudioCapture(QObject *parent = nullptr);
        ~AudioCapture() override = default;

        virtual bool start() = 0;
        virtual void stop() = 0;
        virtual bool isRunning() const = 0;
        virtual int sampleRate() const = 0;

    signals:
        void samplesReady(const QList<float> &samples);
    };

}