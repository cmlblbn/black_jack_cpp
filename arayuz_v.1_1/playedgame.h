#ifndef PLAYEDGAME_H
#define PLAYEDGAME_H

#include <QWidget>
#include "leaderboard.h"
#include "deck.h"
#include "card.h"
#include "pod.h"
#include <QLabel>
#include <QTimer>
#include <QTime>

namespace Ui {
class PlayedGame;
}

class PlayedGame : public QWidget
{
    Q_OBJECT

public:
    explicit PlayedGame(QString player_name,QWidget *parent = nullptr);
    ~PlayedGame();
    void setAllButtonDisabled();
    void setAllButtonEnabled();
    void setGameDeck();
    void setClubs(QString absolutePath);
    void setDiamonds(QString absolutePath);
    void setHearths(QString absolutePath);
    void setSpades(QString absolutePath);
    void setSpecial(QString absolutePath);
    void setPods();
    void setPodsCanvas();
    bool makeDecision(QLabel* status,Pod &pod_score);
    void setMainScore(int const mainScore){this->m_mainScore = mainScore;}
    void increaseMainScore(int score){this->m_mainScore = this->m_mainScore + score;}
    int getMainScore(){return this->m_mainScore;}
    void drawPod(int pod);
    void clearPod(int pod);
    bool isGameFinish();
    void restartGame();

private slots:
    void on_finishButton_clicked();

    void on_leaderBoardButton_clicked();

    void on_takeCardButton_clicked();

    void on_hitButton_1_clicked();

    void on_hitButton_2_clicked();

    void on_hitButton_3_clicked();

    void on_startButton_clicked();

    void startTimer();

private:
    int second = 0;
    QTimer* timer;
    Card *start_Card = new Card("Start","Start Card",0,"/res/resources/res/cards/00.png");
    Card *pulled_Card = new Card("Start","Start Card",0,"/res/resources/res/cards/00.png");
    Deck m_Deck = Deck(0);
    Pod first_pod = Pod("İlk Pod");
    Pod second_pod = Pod("İkinci Pod");
    Pod third_pod = Pod("üçüncü Pod");
    QLabel *pod_canvas1[5];
    QLabel *pod_canvas2[5];
    QLabel *pod_canvas3[5];
    int m_mainScore = 0;
    QString player_name;
    Ui::PlayedGame *ui;
    leaderboard *leader_board;

};

#endif // PLAYEDGAME_H
