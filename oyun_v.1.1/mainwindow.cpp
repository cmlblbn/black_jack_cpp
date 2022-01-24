#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->player_name_input->setStyleSheet("QLineEdit { background: rgb(255, 255, 255); selection-background-color: rgb(233, 99, 0); color: rgb(0,0,0); }");
    ui->playButton->setAttribute(Qt::WA_TranslucentBackground);
    ui->quitButton->setAttribute(Qt::WA_TranslucentBackground);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_playButton_clicked()
{
    if(!ui->player_name_input->text().isEmpty())
    {
        this->player_name = ui->player_name_input->text();
    }
    this->hide();
    play = new PlayedGame(this->player_name);
    play->show();
}

