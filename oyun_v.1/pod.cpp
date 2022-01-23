#include "pod.h"
#include<iostream>

Pod::Pod()
{

}

Pod::Pod(QString pod_name)
{
    this->m_pod_name = pod_name;
    this->m_pod_Cards = std::vector<Card>();
}

void Pod::mPodPushCard(Card card)
{
    if(this->m_pod_count <= this->size_limit){
        this->m_pod_Cards.push_back(card);
        this->updatePodCount();
        this->m_score = this->m_score + this->updateScore();
    }
    else{
        std::cout << "Pod is Full";
    }
}

void Pod::updatePodCount()
{
    this->m_pod_count = this->m_pod_Cards.size();
}

int Pod::updateScore(){
    int card_score = 0;
    if(!this->m_pod_Cards.empty()){
       card_score = this->m_pod_Cards[this->m_pod_count-1].getCardPoint();
    }
    else{
        std::cout << "Pod is empty";
    }

    return card_score;
}

void Pod::resetPod()
{
    this->m_pod_Cards.clear();
    this->m_score = this->updateScore();
    this->updatePodCount();

}
