#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setStyleSheet("QLineEdit { background: rgb(255, 255, 255); selection-background-color: rgb(233, 99, 0); color: rgb(0,0,0); }");
    ui->playButton->setAttribute(Qt::WA_TranslucentBackground);
    ui->quitButton->setAttribute(Qt::WA_TranslucentBackground);
}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_playButton_clicked()
{
    this->hide();
    play = new PlayedGame();
    play->show();
}

