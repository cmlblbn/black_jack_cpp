#include "playedgame.h"
#include "ui_playedgame.h"
#include <QDir>


PlayedGame::PlayedGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayedGame)
{
    ui->setupUi(this);
//    ui->deck_image->setStyleSheet("{border-image: url(:/res/resources/res/cards/00.png) 0 0 0 0 stretch stretch; }");
//    ui->deck_image->setPixmap(QPixmap("/res/resources/res/cards/00.png").scaled(ui->deck_image->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

}

PlayedGame::~PlayedGame()
{
    delete ui;
}




void PlayedGame::on_finishButton_clicked()
{
    // TODO veriler data-base'ye eklenip oyun yeniden baslatilacak



    // new game
    this->~PlayedGame();
    PlayedGame *game = new PlayedGame();
    game->show();
}


void PlayedGame::on_leaderBoardButton_clicked()
{


    leader_board = new leaderboard();
    leader_board->show();
}





void PlayedGame::on_takeCardButton_clicked()
{
    QDir directory("/res/resources/res/cards/");
    QString absolutePath = directory.absoluteFilePath("KH.png");
    ui->deck_image->repaint();
    ui->deck_image->setPixmap(QPixmap(absolutePath).scaled(ui->deck_image->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

//    ui->deck_image->setPixmap(QPixmap("/res/resources/res/cards/KH.png").scaled(ui->deck_image->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

