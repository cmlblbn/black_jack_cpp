#include "playedgame.h"
#include "ui_playedgame.h"
#include <iostream>
#include <QDir>
#include <QDebug>
#include <stdlib.h>
#include <unistd.h>
#include <QRegularExpression>

PlayedGame::PlayedGame(QString player_name,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayedGame)
{
    ui->setupUi(this);
    this->setGameDeck();
    this->setPodsCanvas();
    ui->deck_counter->setText("  ALL    DECK \n      SİZE: " + QString::number(this->m_Deck.getDeckCount()));
    ui->mainScore_value->setText("Score: " +QString::number(this->getMainScore()));
    this->setAllButtonDisabled();
    this->player_name = player_name;
    this->setWindowTitle(QString("BlackJack"));
}

PlayedGame::~PlayedGame()
{
    delete ui;

}

void PlayedGame::setAllButtonDisabled()
{
   ui->takeCardButton->setDisabled(true);
   ui->hitButton_1->setDisabled(true);
   ui->hitButton_2->setDisabled(true);
   ui->hitButton_3->setDisabled(true);
}

void PlayedGame::setAllButtonEnabled()
{
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
    Card jokerClubs = Card("Special","Sinek - JOKER", 10 ,absolutePath + QString("/JC.png"));
    this->m_Deck.mDeckPushCard(jokerClubs);
    Card jokerDiamond = Card("Special","Karo - JOKER", 10 ,absolutePath + QString("/JD.png"));
    this->m_Deck.mDeckPushCard(jokerDiamond);
    Card jokerHearth = Card("Special","Kupa - JOKER", 10 ,absolutePath + QString("/JH.png"));
    this->m_Deck.mDeckPushCard(jokerHearth);
    Card jokerSpade = Card("Special","Maça - JOKER", 10 ,absolutePath + QString("/JS.png"));
    this->m_Deck.mDeckPushCard(jokerSpade);
    // Joker kartları eklendi

    Card kingClubs = Card("Special","Sinek - PAPAZ", 10 ,absolutePath + QString("/KC.png"));
    this->m_Deck.mDeckPushCard(kingClubs);
    Card kingDiamond = Card("Special","Karo - PAPAZ", 10 ,absolutePath + QString("/KD.png"));
    this->m_Deck.mDeckPushCard(kingDiamond);
    Card kingHearth = Card("Special","Kupa - PAPAZ", 10 ,absolutePath + QString("/KH.png"));
    this->m_Deck.mDeckPushCard(kingClubs);
    Card kingSpade = Card("Special","Maça - PAPAZ", 10 ,absolutePath + QString("/KS.png"));
    this->m_Deck.mDeckPushCard(kingSpade);
    //Papaz kartları eklendi

    Card queenClubs = Card("Special","Sinek - KIZ", 10 ,absolutePath + QString("/QC.png"));
    this->m_Deck.mDeckPushCard(kingClubs);
    Card queenDiamond = Card("Special","Karo - KIZ", 10 ,absolutePath + QString("/QD.png"));
    this->m_Deck.mDeckPushCard(queenDiamond);
    Card queenHearth = Card("Special","Kupa - KIZ", 10 ,absolutePath + QString("/QH.png"));
    this->m_Deck.mDeckPushCard(queenHearth);
    Card queenSpade = Card("Special","Maça - KIZ", 10 ,absolutePath + QString("/KC.png"));
    this->m_Deck.mDeckPushCard(queenSpade);
    //Kız kartları eklendi
}

void PlayedGame::setPodsCanvas()
{
    // POD 1 için gerekli canvaslar ayarlandı
    this->pod_canvas1[0] = ui->pod1_canvas_1; ui->pod1_canvas_1->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas1[1] = ui->pod1_canvas_2; ui->pod1_canvas_2->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas1[2] = ui->pod1_canvas_3; ui->pod1_canvas_3->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas1[3] = ui->pod1_canvas_4; ui->pod1_canvas_4->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas1[4] = ui->pod1_canvas_5; ui->pod1_canvas_5->setStyleSheet("QLabel {background: transparent;}");

    // POD 2 için gerekli canvaslar ayarlandı
    this->pod_canvas2[0] = ui->pod2_canvas_1; ui->pod2_canvas_1->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas2[1] = ui->pod2_canvas_2; ui->pod2_canvas_2->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas2[2] = ui->pod2_canvas_3; ui->pod2_canvas_3->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas2[3] = ui->pod2_canvas_4; ui->pod2_canvas_4->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas2[4] = ui->pod2_canvas_5; ui->pod2_canvas_5->setStyleSheet("QLabel {background: transparent;}");

    // POD 3 için gerekli canvaslar ayarlandı
    this->pod_canvas3[0] = ui->pod3_canvas_1; ui->pod3_canvas_1->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas3[1] = ui->pod3_canvas_2; ui->pod3_canvas_2->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas3[2] = ui->pod3_canvas_3; ui->pod3_canvas_3->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas3[3] = ui->pod3_canvas_4; ui->pod3_canvas_4->setStyleSheet("QLabel {background: transparent;}");
    this->pod_canvas3[4] = ui->pod3_canvas_5; ui->pod3_canvas_5->setStyleSheet("QLabel {background: transparent;}");

}

bool PlayedGame::makeDecision(QLabel* label,Pod &pod)
{
    //bu fonksiyon hangi durumlarda oyuncunun kazanıp kazanmadığına karar verecektir.
    if( this->isWin(pod))//pod 21 oldu mu?
    {
        this->ShowWin(label);
        this->increaseMainScore(1);
        return true;
    }
    else if(this->isBlackJack(pod))//black jack yakalandı mı?
    {
        pod.setScore(21);
        this->ShowWin(label);
        this->increaseMainScore(1);
        return true;
    }
    else if(this->isLose(pod))//podda score 21 geçti mi veya 5 kart oldu mu?(5 kart olup 21i bulan kazanır)
    {
        this->ShowLose(label);
        return true;
    }
    return false;

}

bool PlayedGame::isBlackJack(Pod &pod)
{
    if(pod.getPodCount() == 2)
    {
        QRegularExpression as_regex("(- AS)(.*)"),specialCard_regex("(Special)(.*)"); //AS ve Special kart için regex.
        QRegularExpressionMatch match_specailCard = specialCard_regex.match(pod.getPodCards()[0].getCardType());//special kart başta mı?
        QRegularExpressionMatch match_as = as_regex.match(pod.getPodCards()[1].getCardName()); // ardından as gelmiş mi?

        if(match_as.hasMatch() && match_specailCard.hasMatch()) //regex ile matchleniyor mu?
        {
            return true;
        }
    }
    //blackjack olma şartı: destede 2 kart olmalı ve önce özel kart(papaz,kız) sonrasında ise as gelmeli
    return false;
}

bool PlayedGame::isWin(Pod &pod)
{
    if( pod.getScore() == 21)//pod 21 oldu mu?
    {
        return true;
    }
    return false;
}

bool PlayedGame::isLose(Pod &pod)
{
    if(pod.getScore() > 21 || (pod.getScore() < 21 && pod.getPodCount() == 5))//podda score 21 geçti mi veya 5 kart oldu mu?(5 kart olup 21i bulan kazanır//Blackjack kuralı)
    {

        return true;
    }
    return false;
}

void PlayedGame::ShowWin(QLabel *label)
{
    label->setText("Gained a Score!");
    label->repaint();

    while(1)
    {
        sleep(1);
        break;
    }
    label->setText("get a Score");
    label->repaint();
}

void PlayedGame::ShowLose(QLabel *label)
{
    label->setText("Failed!!");
    label->repaint();
    while(1)
    {
        sleep(1);
        break;
    }
    label->setText("get a Score");
    label->repaint();
}

void PlayedGame::drawPod(int pod)
{
    if(pod == 1)
    {
        for(int i=0; i< this->first_pod.getPodCount(); i++)
        {
            QString absolutePath = first_pod.getPodCards().at(i).getCardPath();
            pod_canvas1[i]->setStyleSheet("QLabel {background: url(:" + absolutePath + ") no-repeat center center fixed;background-position: 100px 20px;}");
            pod_canvas1[i]->repaint();
        }
    }
    else if(pod == 2)
    {
        for(int j=0; j< this->second_pod.getPodCount(); j++)
        {
            QString absolutePath = second_pod.getPodCards().at(j).getCardPath();
            pod_canvas2[j]->setStyleSheet("QLabel {background: url(:" + absolutePath + ") no-repeat center center fixed;background-position: 100px 20px;}");
            pod_canvas2[j]->repaint();
        }
    }
    else if(pod == 3)
    {
        for(int k=0; k< this->third_pod.getPodCount(); k++)
        {
            QString absolutePath = third_pod.getPodCards().at(k).getCardPath();
            pod_canvas3[k]->setStyleSheet("QLabel {background: url(:" + absolutePath + ") no-repeat center center fixed;background-position: 100px 20px;}");
            pod_canvas3[k]->repaint();
        }
    }
}

void PlayedGame::clearPod(int pod)
{
    if(pod == 1)
    {
        ui->pod1_canvas_1->setStyleSheet("QLabel {background: transparent;}"); ui->pod1_canvas_1->repaint();
        ui->pod1_canvas_2->setStyleSheet("QLabel {background: transparent;}"); ui->pod1_canvas_2->repaint();
        ui->pod1_canvas_3->setStyleSheet("QLabel {background: transparent;}"); ui->pod1_canvas_3->repaint();
        ui->pod1_canvas_4->setStyleSheet("QLabel {background: transparent;}"); ui->pod1_canvas_4->repaint();
        ui->pod1_canvas_5->setStyleSheet("QLabel {background: transparent;}"); ui->pod1_canvas_5->repaint();
    }
    else if(pod == 2)
    {
        ui->pod2_canvas_1->setStyleSheet("QLabel {background: transparent;}"); ui->pod2_canvas_1->repaint();
        ui->pod2_canvas_2->setStyleSheet("QLabel {background: transparent;}"); ui->pod2_canvas_2->repaint();
        ui->pod2_canvas_3->setStyleSheet("QLabel {background: transparent;}"); ui->pod2_canvas_3->repaint();
        ui->pod2_canvas_4->setStyleSheet("QLabel {background: transparent;}"); ui->pod2_canvas_4->repaint();
        ui->pod2_canvas_5->setStyleSheet("QLabel {background: transparent;}"); ui->pod2_canvas_5->repaint();
    }
    else if(pod == 3)
    {
        ui->pod3_canvas_1->setStyleSheet("QLabel {background: transparent;}"); ui->pod3_canvas_1->repaint();
        ui->pod3_canvas_2->setStyleSheet("QLabel {background: transparent;}"); ui->pod3_canvas_2->repaint();
        ui->pod3_canvas_3->setStyleSheet("QLabel {background: transparent;}"); ui->pod3_canvas_3->repaint();
        ui->pod3_canvas_4->setStyleSheet("QLabel {background: transparent;}"); ui->pod3_canvas_4->repaint();
        ui->pod3_canvas_5->setStyleSheet("QLabel {background: transparent;}"); ui->pod3_canvas_5->repaint();

    }
}

bool PlayedGame::isGameFinish()
{
    if(this->m_Deck.getDeckCount() == 0 && this->pulled_Card->getCardType() == "Start")
    {
        return true;
    }
    return false;
}

void PlayedGame::showResult()
{
    this->db.insertData(this->getPlayerName(),this->getMainScore(),this->getSecond());
    this->result = new Result(this->getMainScore(),this->getSecond());
    result->setWindowIcon(QIcon(":/res/resources/res/cards/icon31.png"));
    this->result->show();
    disconnect(this->timer,SIGNAL(timeout()),this,SLOT(startTimer()));
    this->timer->stop();


}

void PlayedGame::restartGame()
{
    this->~PlayedGame();
    PlayedGame *game = new PlayedGame(this->player_name);
    game->setWindowIcon(QIcon(":/res/resources/res/cards/icon31.png"));
    game->show();
}

void PlayedGame::on_restartButton_clicked()
{


    // new game
    this->restartGame();

}

void PlayedGame::on_leaderBoardButton_clicked()
{


    //Database db = Database("deneme.sqlite","BlackJack_v_01");
    QString leaderboard_data = this->db.getData();
    leader_board = new leaderboard(leaderboard_data);
    leader_board->setWindowTitle(QString("BlackJack"));
    leader_board->setWindowIcon(QIcon(":/res/resources/res/cards/icon31.png"));
    leader_board->show();
}

void PlayedGame::on_takeCardButton_clicked()
{
    if(this->m_Deck.getDeckCount() > 0)
    {
        *this->pulled_Card = m_Deck.mDeckPullCard();
        this->m_Deck.UpdateDeckCount();
        QString absolutePath = pulled_Card->getCardPath();        
        ui->deck_image->setStyleSheet("QLabel {border-image: url(:" + absolutePath + ") 0 0 0 0 stretch stretch; }");
        ui->deck_counter->setText("  ALL    DECK \n      SİZE: " + QString::number(this->m_Deck.getDeckCount()));
        ui->deck_image->repaint();
    }
}


void PlayedGame::on_hitButton_1_clicked()
{
    if(this->pulled_Card->getCardType() != "Start")
    {
        this->first_pod.mPodPushCard(*this->pulled_Card);
        *this->pulled_Card = *this->start_Card;
        ui->deck_image->setStyleSheet("QLabel {border-image: url(:" + this->pulled_Card->getCardPath() + ") 0 0 0 0 stretch stretch; }");
        ui->deck_image->repaint(); // çekilen kart artık deckde değil, görsel olarak kapatılmalı.

        if(this->isBlackJack(this->first_pod))//Black jack yakalandığında arayüz bugu oluşuyor. Bu yüzden if else yapısı ile güncellendi.
        {
            this->first_pod.setScore(21);
            ui->pod1_score->setText("Score: " + QString::number(this->first_pod.getScore()));
            ui->pod1_score->repaint();
        }
        else
        {
            ui->pod1_score->setText("Score: " + QString::number(this->first_pod.getScore()));
            ui->pod1_score->repaint();
            this->drawPod(1);
        }

        this->drawPod(1); //Kartlar poda çiziliyor.

        if(this->makeDecision(ui->Status_1,this->first_pod))// win-lose durumları kontrol ediliyor.
        {
            this->first_pod.resetPod();
            this->clearPod(1);
            ui->pod1_score->setText("Score: 0");
        }   //Win veya lose alınsın pod temizlenmeli.

        ui->mainScore_value->setText("Score: " + QString::number(this->getMainScore())); // main score güncelleniyor.
    }
}


void PlayedGame::on_hitButton_2_clicked()
{
    if(this->pulled_Card->getCardType() != "Start")
    {
        this->second_pod.mPodPushCard(*this->pulled_Card);
        *this->pulled_Card = *this->start_Card;
        ui->deck_image->setStyleSheet("QLabel {border-image: url(:" + this->pulled_Card->getCardPath() + ") 0 0 0 0 stretch stretch; }");
        ui->deck_image->repaint();// çekilen kart artık deckde değil, görsel olarak kapatılmalı.

        if(this->isBlackJack(this->second_pod))//Black jack yakalandığında arayüz bugu oluşuyor. Bu yüzden if else yapısı ile güncellendi.
        {
            this->second_pod.setScore(21);
            ui->pod2_score->setText("Score: " + QString::number(this->second_pod.getScore()));
            ui->pod2_score->repaint();
        }
        else
        {
            ui->pod2_score->setText("Score: " + QString::number(this->second_pod.getScore()));
            ui->pod2_score->repaint();
        }


        this->drawPod(2); //Kartlar poda çiziliyor

        if(this->makeDecision(ui->Status_2,second_pod))// win-lose durumları kontrol ediliyor.
        {
            this->second_pod.resetPod();
            this->clearPod(2);
            ui->pod2_score->setText("Score: 0");
        }   //Win veya lose alınsın pod temizlenmeli.

        ui->mainScore_value->setText("Score: " +QString::number(this->getMainScore()));
    }
}


void PlayedGame::on_hitButton_3_clicked()
{
    if(this->pulled_Card->getCardType() != "Start")
    {
        this->third_pod.mPodPushCard(*this->pulled_Card);
        *this->pulled_Card = *this->start_Card;
        ui->deck_image->setStyleSheet("QLabel {border-image: url(:" + this->pulled_Card->getCardPath() + ") 0 0 0 0 stretch stretch; }");
        ui->deck_image->repaint();// çekilen kart artık deckde değil, görsel olarak kapatılmalı.

        if(this->isBlackJack(this->third_pod))//Black jack yakalandığında arayüz bugu oluşuyor. Bu yüzden if else yapısı ile güncellendi.
        {
            this->third_pod.setScore(21);
            ui->pod3_score->setText("Score: " + QString::number(this->third_pod.getScore()));
            ui->pod3_score->repaint();
        }
        else
        {
            ui->pod3_score->setText("Score: " + QString::number(this->third_pod.getScore()));
            ui->pod3_score->repaint();
            this->drawPod(1);
        }

        this->drawPod(3); //Kartlar poda çiziliyor

        if(this->makeDecision(ui->Status_3,third_pod))// win-lose durumları kontrol ediliyor.
        {
            this->third_pod.resetPod();
            this->clearPod(3);
            ui->pod3_score->setText("Score: 0");
        }   //Win veya lose alınsın pod temizlenmeli.

        ui->mainScore_value->setText("Score: " +QString::number(this->getMainScore()));
    }

}


void PlayedGame::on_startButton_clicked()
{
    this->setAllButtonEnabled();
    ui->startButton->setDisabled(true);
    this->timer = new QTimer();
    connect(this->timer,SIGNAL(timeout()),this,SLOT(startTimer()));
    timer->start(1000);
}

void PlayedGame::startTimer()
{
    this->second++;
    ui->time->setText("Geçen Süre: " + QString::number(second) + " sn");
    ui->time->repaint();
    if(this->isGameFinish())
    {
        this->showResult();
    }
}

