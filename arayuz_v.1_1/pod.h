#ifndef POD_H
#define POD_H
#include "card.h"
#include <QString>
#include <vector>

class Pod
{
private:
    int const size_limit = 5; // maximum card count
    QString m_pod_name;
    std::vector<Card> m_pod_Cards;
    int m_pod_count = 0;
    int m_score = 0;

public:
    Pod();
    Pod(QString pod_name);

    QString getPodName(){return this->m_pod_name;}
    void setPodName(QString const pod_name){this->m_pod_name = pod_name;}

    std::vector<Card> getPodCards(){return this->m_pod_Cards;}
    void setPodCards(){this->m_pod_Cards = std::vector<Card>();}

    int getPodCount(){return this->m_pod_count;}
    void setPodCount(int const pod_count){this->m_pod_count = pod_count;}

    int getScore(){return this->m_score;}
    void setScore(int const score){this->m_score = score;}
    //class members getter and setter

    void mPodPushCard(Card card);
    void updatePodCount();
    int updateScore();
    //when user add a card in the pod, we need the update this pod

    void resetPod();
    QString getPodCardsName();
    //if you get a score or fail, we need the clear this pod



};

#endif // POD_H
