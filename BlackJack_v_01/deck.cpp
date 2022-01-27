#include "deck.h"
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>
#include <iostream>
#include <QDebug>

// int myrandom (int i) { return std::rand()%i;}



Deck::Deck()
{

}

Deck::Deck(int deck_count)
{
    this->m_deck_count = deck_count;

}

void Deck::mDeckPushCard(Card card)
{

    if(this->m_deck_count <= this->deck_size){
        this->m_DECK.push_back(card);
        UpdateDeckCount();
    }
    else{
        qDebug() << "Deck is Full";
    }

}

Card Deck::mDeckPullCard()
{
    Card nextCard;
    if(!this->m_DECK.empty()){
    this->UpdateDeckCount();
    nextCard = this->m_DECK[this->m_deck_count-1];  
    this->m_DECK.pop_back();
    }
    else{
        qDebug()  << "Deck is empty";
    }
    return nextCard;
}

void Deck::ShuffleCards()
{
    if(!this->m_DECK.empty()){
        std::random_shuffle(this->m_DECK.begin(), this->m_DECK.end(), [](int i) { return std::rand()%i;});  // kart destesinin karıştırılması için random_shuffle kullanıldı, time ile random değer çekildi
    }
    else{
       qDebug()  << "Vector is empty..";
    }

}

void Deck::UpdateDeckCount()
{
    this->m_deck_count = this->m_DECK.size();
}





