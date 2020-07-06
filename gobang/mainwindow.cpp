#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionMan_Man_triggered()
{
    Chessboard* pchessboard = dynamic_cast<Chessboard*>(ui->centralwidget->children().at(0));
    pchessboard->hide();
}

void MainWindow::on_actionMan_Machine_triggered()
{
    Chessboard* pchessboard = dynamic_cast<Chessboard*>(ui->centralwidget->children().at(0));
    pchessboard->show();
}
