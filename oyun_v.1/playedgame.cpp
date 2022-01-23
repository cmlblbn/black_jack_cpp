#include "playedgame.h"
#include "ui_playedgame.h"
#include <iostream>
#include <QDir>
#include <QDebug>
#include <stdlib.h>
#include <unistd.h>


PlayedGame::PlayedGame(QString player_name,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayedGame)
{
    ui->setupUi(this);
    this->setGameDeck();
    qDebug() << this->m_Deck.getDeckCount();
    ui->deck_counter->setText("ALL DECK \nSİZE:" + QString::number(this->m_Deck.getDeckCount()));
    ui->mainScore_value->setText("Score: " +QString::number(this->getMainScore()));
    this->setAllButtonDisabled();
    this->player_name = player_name;
}

PlayedGame::~PlayedGame()
{
    delete ui;

}

void PlayedGame::setAllButtonDisabled()
{
   ui->finishButton->setDisabled(true);
   ui->takeCardButton->setDisabled(true);
   ui->hitButton_1->setDisabled(true);
   ui->hitButton_2->setDisabled(true);
   ui->hitButton_3->setDisabled(true);
}

void PlayedGame::setAllButtonEnabled()
{
    ui->finishButton->setEnabled(true);
    ui->takeCardButton->setEnabled(true);
    ui->hitButton_1->setEnabled(true);
    ui->hitButton_2->setEnabled(true);
    ui->hitButton_3->setEnabled(true);
}

void PlayedGame::setGameDeck()
{

    QString absolutePath = "/res/resources/res/cards";
    this->setClubs(absolutePath);
    this->setDiamonds(absolutePath);
    this->setHearths(absolutePath);
    this->setSpades(absolutePath);
    this->setSpecial(absolutePath);
    this->m_Deck.ShuffleCards();

    // Kart destesi generate edip Desteği karıştırmak için gerekli fonksiyon


//    Card pulled_Card = this->m_Deck.mDeckPullCard();
//    qDebug() << pulled_Card.getCardName() << " Pulled and card path is: " << pulled_Card.getCardPath();


}

void PlayedGame::setClubs(QString absolutePath)
{

    Card Clubs1 = Card("Clubs","Sinek - AS", 1 ,absolutePath + QString("/1C.png"));
    this->m_Deck.mDeckPushCard(Clubs1);
    Card Clubs2 = Card("Clubs","Sinek - 2", 2 ,absolutePath + QString("/2C.png"));
    this->m_Deck.mDeckPushCard(Clubs2);
    Card Clubs3 = Card("Clubs","Sinek - 3", 3 ,absolutePath + QString("/3C.png"));
    this->m_Deck.mDeckPushCard(Clubs3);
    Card Clubs4 = Card("Clubs","Sinek - 4", 4 ,absolutePath + QString("/4C.png"));
    this->m_Deck.mDeckPushCard(Clubs4);
    Card Clubs5 = Card("Clubs","Sinek - 5", 5 ,absolutePath + QString("/5C.png"));
    this->m_Deck.mDeckPushCard(Clubs5);
    Card Clubs6 = Card("Clubs","Sinek - 6", 6 ,absolutePath + QString("/6C.png"));
    this->m_Deck.mDeckPushCard(Clubs6);
    Card Clubs7 = Card("Clubs","Sinek - 7", 7 ,absolutePath + QString("/7C.png"));
    this->m_Deck.mDeckPushCard(Clubs7);
    Card Clubs8 = Card("Clubs","Sinek - 8", 8 ,absolutePath + QString("/8C.png"));
    this->m_Deck.mDeckPushCard(Clubs8);
    Card Clubs9 = Card("Clubs","Sinek - 9", 9 ,absolutePath + QString("/9C.png"));
    this->m_Deck.mDeckPushCard(Clubs9);
    Card Clubs10 = Card("Clubs","Sinek - 10", 10 ,absolutePath + QString("/XC.png"));
    this->m_Deck.mDeckPushCard(Clubs10);

    // Sinek kartları tanımlandı ve deck için ayrılmış vektöre eklendi.
}

void PlayedGame::setDiamonds(QString absolutePath)
{
    Card Diamond1 = Card("Diamond","Karo - AS", 1 ,absolutePath + QString("/1D.png"));
    this->m_Deck.mDeckPushCard(Diamond1);
    Card Diamond2 = Card("Diamond","Karo - 2", 2 ,absolutePath + QString("/2D.png"));
    this->m_Deck.mDeckPushCard(Diamond2);
    Card Diamond3 = Card("Diamond","Karo - 3", 3 ,absolutePath + QString("/3D.png"));
    this->m_Deck.mDeckPushCard(Diamond3);
    Card Diamond4 = Card("Diamond","Karo - 4", 4 ,absolutePath + QString("/4D.png"));
    this->m_Deck.mDeckPushCard(Diamond4);
    Card Diamond5 = Card("Diamond","Karo - 5", 5 ,absolutePath + QString("/5D.png"));
    this->m_Deck.mDeckPushCard(Diamond5);
    Card Diamond6 = Card("Diamond","Karo - 6", 6 ,absolutePath + QString("/6D.png"));
    this->m_Deck.mDeckPushCard(Diamond6);
    Card Diamond7 = Card("Diamond","Karo - 7", 7 ,absolutePath + QString("/7D.png"));
    this->m_Deck.mDeckPushCard(Diamond7);
    Card Diamond8 = Card("Diamond","Karo - 8", 8 ,absolutePath + QString("/8D.png"));
    this->m_Deck.mDeckPushCard(Diamond8);
    Card Diamond9 = Card("Diamond","Karo - 9", 9 ,absolutePath + QString("/9D.png"));
    this->m_Deck.mDeckPushCard(Diamond9);
    Card Diamond10 = Card("Diamond","Karo - 10", 10 ,absolutePath + QString("/XD.png"));
    this->m_Deck.mDeckPushCard(Diamond10);


    // Karo kartları tanımlandı ve deck için ayrılmış vektöre eklendi.
}

void PlayedGame::setHearths(QString absolutePath)
{
    Card Hearth1 = Card("Hearth","Kupa - AS", 1 ,absolutePath + QString("/1H.png"));
    this->m_Deck.mDeckPushCard(Hearth1);
    Card Hearth2 = Card("Hearth","Kupa - 2", 2 ,absolutePath + QString("/2H.png"));
    this->m_Deck.mDeckPushCard(Hearth2);
    Card Hearth3 = Card("Hearth","Kupa - 3", 3 ,absolutePath + QString("/3H.png"));
    this->m_Deck.mDeckPushCard(Hearth3);
    Card Hearth4 = Card("Hearth","Kupa - 4", 4 ,absolutePath + QString("/4H.png"));
    this->m_Deck.mDeckPushCard(Hearth4);
    Card Hearth5 = Card("Hearth","Kupa - 5", 5 ,absolutePath + QString("/5H.png"));
    this->m_Deck.mDeckPushCard(Hearth5);
    Card Hearth6 = Card("Hearth","Kupa - 6", 6 ,absolutePath + QString("/6H.png"));
    this->m_Deck.mDeckPushCard(Hearth6);
    Card Hearth7 = Card("Hearth","Kupa - 7", 7 ,absolutePath + QString("/7H.png"));
    this->m_Deck.mDeckPushCard(Hearth7);
    Card Hearth8 = Card("Hearth","Kupa - 8", 8 ,absolutePath + QString("/8H.png"));
    this->m_Deck.mDeckPushCard(Hearth8);
    Card Hearth9 = Card("Hearth","Kupa - 9", 9 ,absolutePath + QString("/9H.png"));
    this->m_Deck.mDeckPushCard(Hearth9);
    Card Hearth10 = Card("Hearth","Kupa - 10", 10 ,absolutePath + QString("/XH.png"));
    this->m_Deck.mDeckPushCard(Hearth10);


}

void PlayedGame::setSpades(QString absolutePath)
{
    Card Spades1 = Card("Spades","Maça - AS", 1 ,absolutePath + QString("/1S.png"));
    this->m_Deck.mDeckPushCard(Spades1);
    Card Spades2 = Card("Spades","Maça - 2", 2 ,absolutePath + QString("/2S.png"));
    this->m_Deck.mDeckPushCard(Spades2);
    Card Spades3 = Card("Spades","Maça - 3", 3 ,absolutePath + QString("/3S.png"));
    this->m_Deck.mDeckPushCard(Spades3);
    Card Spades4 = Card("Spades","Maça - 4", 4 ,absolutePath + QString("/4S.png"));
    this->m_Deck.mDeckPushCard(Spades4);
    Card Spades5 = Card("Spades","Maça - 5", 5 ,absolutePath + QString("/5S.png"));
    this->m_Deck.mDeckPushCard(Spades5);
    Card Spades6 = Card("Spades","Maça - 6", 6 ,absolutePath + QString("/6S.png"));
    this->m_Deck.mDeckPushCard(Spades6);
    Card Spades7 = Card("Spades","Maça - 7", 7 ,absolutePath + QString("/7S.png"));
    this->m_Deck.mDeckPushCard(Spades7);
    Card Spades8 = Card("Spades","Maça - 8", 8 ,absolutePath + QString("/8S.png"));
    this->m_Deck.mDeckPushCard(Spades8);
    Card Spades9 = Card("Spades","Maça - 9", 9 ,absolutePath + QString("/9S.png"));
    this->m_Deck.mDeckPushCard(Spades9);
    Card Spades10 = Card("Spades","Maça - 10", 10 ,absolutePath + QString("/XS.png"));
    this->m_Deck.mDeckPushCard(Spades10);


}

void PlayedGame::setSpecial(QString absolutePath)
{
    //Özel kartları burada deck içine yükleyeceğiz.
    Card jokerClubs = Card("Clubs","Sinek - JOKER", 10 ,absolutePath + QString("/JC.png"));
    this->m_Deck.mDeckPushCard(jokerClubs);
    Card jokerDiamond = Card("Diamond","Karo - JOKER", 10 ,absolutePath + QString("/JD.png"));
    this->m_Deck.mDeckPushCard(jokerDiamond);
    Card jokerHearth = Card("Hearth","Kupa - JOKER", 10 ,absolutePath + QString("/JH.png"));
    this->m_Deck.mDeckPushCard(jokerHearth);
    Card jokerSpade = Card("Spade","Maça - JOKER", 10 ,absolutePath + QString("/JS.png"));
    this->m_Deck.mDeckPushCard(jokerSpade);
    // Joker kartları eklendi

    Card kingClubs = Card("Clubs","Sinek - PAPAZ", 10 ,absolutePath + QString("/KC.png"));
    this->m_Deck.mDeckPushCard(kingClubs);
    Card kingDiamond = Card("Diamond","Karo - PAPAZ", 10 ,absolutePath + QString("/KD.png"));
    this->m_Deck.mDeckPushCard(kingDiamond);
    Card kingHearth = Card("Hearth","Kupa - PAPAZ", 10 ,absolutePath + QString("/KH.png"));
    this->m_Deck.mDeckPushCard(kingClubs);
    Card kingSpade = Card("Spade","Maça - PAPAZ", 10 ,absolutePath + QString("/KS.png"));
    this->m_Deck.mDeckPushCard(kingSpade);
    //Papaz kartları eklendi

    Card queenClubs = Card("Clubs","Sinek - KIZ", 10 ,absolutePath + QString("/QC.png"));
    this->m_Deck.mDeckPushCard(kingClubs);
    Card queenDiamond = Card("Diamond","Karo - KIZ", 10 ,absolutePath + QString("/QD.png"));
    this->m_Deck.mDeckPushCard(queenDiamond);
    Card queenHearth = Card("Hearth","Kupa - KIZ", 10 ,absolutePath + QString("/QH.png"));
    this->m_Deck.mDeckPushCard(queenHearth);
    Card queenSpade = Card("Spade","Maça - KIZ", 10 ,absolutePath + QString("/KC.png"));
    this->m_Deck.mDeckPushCard(queenSpade);
    //Kız kartları eklendi
}

bool PlayedGame::makeDecision(QLabel* status,Pod &pod)
{

    if( pod.getScore() == 21)
    {
        status->setText("You Gained a Score!!");
        status->repaint();
        while(1)
        {
            sleep(1);
            break;
        }
        status->setText("get a Score");
        status->repaint();
        this->increaseMainScore(1);
        return true;
    }
    else if(pod.getScore() > 21 || (pod.getScore() < 21 && pod.getPodCount() == 5))
    {
        status->setText("Failed!!");
        status->repaint();
        while(1)
        {

            sleep(1);
            break;
        }
        status->setText("get a Score");
        status->repaint();
        return true;
    }
    return false;

}

bool PlayedGame::isGameFinish()
{
    if(this->m_Deck.getDeckCount() == 0 && this->pulled_Card->getCardType() == "Start")
    {
        return true;
    }
    return false;
}

void PlayedGame::restartGame()
{
    this->~PlayedGame();
    PlayedGame *game = new PlayedGame(this->player_name);
    game->show();
}

void PlayedGame::on_finishButton_clicked()
{
    // TODO veriler data-base'ye eklenip oyun yeniden baslatilacak

    // new game
    this->restartGame();

}

void PlayedGame::on_leaderBoardButton_clicked()
{


    leader_board = new leaderboard();
    leader_board->show();
}

void PlayedGame::on_takeCardButton_clicked()
{
    if(this->m_Deck.getDeckCount() > 0)
    {
        *this->pulled_Card = m_Deck.mDeckPullCard();
        this->m_Deck.UpdateDeckCount();
        QString absolutePath = pulled_Card->getCardPath();
        qDebug() << pulled_Card->getCardName();
        ui->deck_image->setStyleSheet("QLabel {border-image: url(:" + absolutePath + ") 0 0 0 0 stretch stretch; }");
        ui->deck_counter->setText("ALL DECK \nSİZE:" + QString::number(this->m_Deck.getDeckCount()));
        ui->deck_image->repaint();
    }
}


void PlayedGame::on_hitButton_1_clicked()
{
    if(this->pulled_Card->getCardType() != "Start")
    {
        this->first_pod.mPodPushCard(*this->pulled_Card);
        ui->pod1_canvas->setText(this->first_pod.getPodCardsName());
        qDebug() << first_pod.getScore() << first_pod.getPodCount();
        *this->pulled_Card = *this->start_Card;
        ui->deck_image->setStyleSheet("QLabel {border-image: url(:" + this->pulled_Card->getCardPath() + ") 0 0 0 0 stretch stretch; }");
        ui->pod1_score->setText("Score: " + QString::number(first_pod.getScore()));
        ui->deck_image->repaint();
        ui->pod1_score->repaint();
        if(this->makeDecision(ui->Status_1,this->first_pod))
        {
            this->first_pod.resetPod();
            ui->pod1_canvas->clear();
            ui->pod1_score->setText("Score: 0");
        }
        ui->mainScore_value->setText("Score: " +QString::number(this->getMainScore()));
        if(this->isGameFinish())
        {
            //TODO Oyunun bittiğine dair geri bildirim verilip yeniden başlatılacak
            qDebug() << "Oyun bitti, Scoreunuz: " << this->getMainScore();
            while(1)
            {sleep(2);break;}
            this->restartGame();
        }
    }
}


void PlayedGame::on_hitButton_2_clicked()
{
    if(this->pulled_Card->getCardType() != "Start")
    {
        this->second_pod.mPodPushCard(*this->pulled_Card);
        ui->pod2_canvas->setText(this->second_pod.getPodCardsName());
        qDebug() << second_pod.getScore() << second_pod.getPodCount();
        *this->pulled_Card = *this->start_Card;
        ui->deck_image->setStyleSheet("QLabel {border-image: url(:" + this->pulled_Card->getCardPath() + ") 0 0 0 0 stretch stretch; }");
        ui->pod2_score->setText("Score: " + QString::number(second_pod.getScore()));
        ui->deck_image->repaint();
        ui->pod2_score->repaint();
        if(this->makeDecision(ui->Status_2,second_pod))
        {
            this->second_pod.resetPod();
            ui->pod2_canvas->clear();
            ui->pod2_score->setText("Score: ");
        }
        ui->mainScore_value->setText("Score: " +QString::number(this->getMainScore()));
        if(this->isGameFinish())
        {
            //TODO Oyunun bittiğine dair geri bildirim verilip yeniden başlatılacak
            qDebug() << "Oyun bitti, Scoreunuz: " << this->getMainScore();
            while(1)
            {sleep(2);break;}
            this->restartGame();
        }


    }
}


void PlayedGame::on_hitButton_3_clicked()
{
    if(this->pulled_Card->getCardType() != "Start")
    {
        this->third_pod.mPodPushCard(*this->pulled_Card);
        ui->pod3_canvas->setText(this->third_pod.getPodCardsName());
        qDebug() << third_pod.getScore() << third_pod.getPodCount();
        *this->pulled_Card = *this->start_Card;
        ui->deck_image->setStyleSheet("QLabel {border-image: url(:" + this->pulled_Card->getCardPath() + ") 0 0 0 0 stretch stretch; }");
        ui->pod3_score->setText("Score: " + QString::number(third_pod.getScore()));
        ui->deck_image->repaint();
        ui->pod3_score->repaint();
        if(this->makeDecision(ui->Status_3,third_pod))
        {
            this->third_pod.resetPod();
            ui->pod3_canvas->clear();
            ui->pod3_score->setText("Score: ");
        }
        ui->mainScore_value->setText("Score: " +QString::number(this->getMainScore()));
        if(this->isGameFinish())
        {
            //TODO Oyunun bittiğine dair geri bildirim verilip yeniden başlatılacak
            qDebug() << "Oyun bitti, Scoreunuz: " << this->getMainScore();
            while(1)
            {sleep(2);break;}
            this->restartGame();
        }
    }

}


void PlayedGame::on_startButton_clicked()
{
    this->setAllButtonEnabled();
    this->timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(startTimer()));
    timer->start(1000);
}

void PlayedGame::startTimer()
{
    this->second++;

    ui->time->setText("Geçen Süre: " + QString::number(second) + " sn");
    ui->time->repaint();
}

