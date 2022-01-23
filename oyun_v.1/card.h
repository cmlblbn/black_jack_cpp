#ifndef CARD_H
#define CARD_H
#include <QString>

class Card
{
private:
    QString m_card_type;
    QString m_card_name;
    QString m_card_path;
    int m_card_point;

public:

    Card();
    Card(QString card_type, QString card_name, int card_point, QString card_path);

    //Empty CTor for different case

    void setCardType(QString const card_type){this->m_card_type = card_type;}
    void setCardName(QString const card_name){this->m_card_name = card_name;}
    void setCardPoint(int const card_point){this->m_card_point = card_point;}
    void setCardPath(QString const card_path){this->m_card_path = card_path;}

    QString getCardType(){return this->m_card_type;}
    QString getCardName(){return this->m_card_name;}
    int getCardPoint(){return this->m_card_point;}
    QString getCardPath(){return this->m_card_path;}

    //property getter and setter



};

#endif // CARD_H
