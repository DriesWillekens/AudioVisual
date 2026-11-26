#include "audio/LoopbackCapture.h"
#include <QDebug>

namespace wavelab {

    LoopbackCapture::LoopbackCapture(QObject *parent)
        : AudioCapture(parent)
    {
    }

    LoopbackCapture::~LoopbackCapture()
    {
        stop();
    }

    bool LoopbackCapture::start()
    {
        qWarning() << "LoopbackCapture::start() nog niet geimplementeerd (stap 2)";
        return false;
    }

    void LoopbackCapture::stop()
    {
        m_running = false;
    }

    bool LoopbackCapture::isRunning() const
    {
        return m_running;
    }

    int LoopbackCapture::sampleRate() const
    {
        return m_sampleRate;
    }

}