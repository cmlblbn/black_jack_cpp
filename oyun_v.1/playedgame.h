#ifndef PLAYEDGAME_H
#define PLAYEDGAME_H

#include <QWidget>
#include "leaderboard.h"


namespace Ui {
class PlayedGame;
}

class PlayedGame : public QWidget
{
    Q_OBJECT

public:
    explicit PlayedGame(QWidget *parent = nullptr);
    ~PlayedGame();

private slots:
    void on_finishButton_clicked();

    void on_leaderBoardButton_clicked();



    void on_takeCardButton_clicked();

private:
    Ui::PlayedGame *ui;
    leaderboard *leader_board;

};

#endif // PLAYEDGAME_H
