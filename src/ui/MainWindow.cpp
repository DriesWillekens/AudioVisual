#include "ui/MainWindow.h"
#include "ui/VisualizerWidget.h"

namespace wavelab {

    MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), m_visualizer(new VisualizerWidget(this))
    {
        setWindowTitle("WaveLab");
        resize(1000, 600);
        setCentralWidget(m_visualizer);
    }

}