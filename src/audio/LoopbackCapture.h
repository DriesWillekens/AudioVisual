#pragma once
#include "audio/AudioCapture.h"

namespace wavelab {

    class LoopbackCapture : public AudioCapture
    {
        Q_OBJECT
    public:
        explicit LoopbackCapture(QObject *parent = nullptr);
        ~LoopbackCapture() override;

        bool start() override;
        void stop() override;
        bool isRunning() const override;
        int sampleRate() const override;

    private:
        bool m_running = false;
        int m_sampleRate = 48000;
    };

}