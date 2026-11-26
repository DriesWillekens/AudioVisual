#include "ui/VisualizerWidget.h"

namespace wavelab {

    VisualizerWidget::VisualizerWidget(QWidget *parent)
        : QOpenGLWidget(parent)
    {
    }

    void VisualizerWidget::setEffect(std::unique_ptr<Effect> effect)
    {
        m_effect = std::move(effect);
        update();
    }

    void VisualizerWidget::initializeGL()
    {
        initializeOpenGLFunctions();
        glClearColor(0.05f, 0.05f, 0.1f, 1.0f);
    }

    void VisualizerWidget::resizeGL(int w, int h)
    {
        glViewport(0, 0, w, h);
    }

    void VisualizerWidget::paintGL()
    {
        glClear(GL_COLOR_BUFFER_BIT);
    }
}