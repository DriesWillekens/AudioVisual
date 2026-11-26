#pragma once
#include <QMainWindow>

namespace wavelab {

class VisualizerWidget;

    class MainWindow : public QMainWindow
    {
        Q_OBJECT
    public:
        explicit MainWindow(QWidget *parent = nullptr);

    private:
        VisualizerWidget *m_visualizer;
    };

}