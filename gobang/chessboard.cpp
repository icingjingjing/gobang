#include "chessboard.h"
#include <qpainter.h>
Chessboard::Chessboard(QWidget* parent) : QOpenGLWidget(parent)
{

}

void Chessboard::initializeGL()
{
	initializeOpenGLFunctions();
    glClearColor(0.0, 0.0, 0.0, 1.0);
}

void Chessboard::resizeGL(int w, int h)
{

}

void Chessboard::paintGL()
{

}
