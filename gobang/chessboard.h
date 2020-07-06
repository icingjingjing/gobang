#ifndef CHECKBOARD_H
#define CHECKBOARD_H
#include <QOpenGLWidget>
#include <QOpenGLFunctions>

class Chessboard : public QOpenGLWidget, protected QOpenGLFunctions
{
public:
    Chessboard(QWidget* parent);

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
};

#endif // CHECKBOARD_H
