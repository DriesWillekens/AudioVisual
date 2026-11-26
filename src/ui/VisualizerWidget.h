#pragma once
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <memory>
#include "effects/Effect.h"

namespace wavelab {

    class VisualizerWidget : public QOpenGLWidget, protected QOpenGLFunctions
    {
        Q_OBJECT
    public:
        explicit VisualizerWidget(QWidget *parent = nullptr);
        void setEffect(std::unique_ptr<Effect> effect);

    protected:
        void initializeGL() override;
        void resizeGL(int w, int h) override;
        void paintGL() override;

    private:
        std::unique_ptr<Effect> m_effect;
    };

}