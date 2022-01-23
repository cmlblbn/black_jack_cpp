#include "deck.h"
#include <vector>
#include <algorithm>
#include <random>
#include <iostream>

Deck::Deck()
{

}

void Deck::mDeckPushCard(Card card)
{
    if(this->m_deck_count <= this->deck_size){
        this->m_DECK.push_back(card);
        this->UpdateDeckCount();
    }
    else{
        std::cout << "Deck is Full";
    }

}

Card Deck::mDeckPullCard()
{
    Card nextCard;
    if(!this->m_DECK.empty()){
    nextCard = this->m_DECK[this->m_deck_count-1];
    this->m_DECK.pop_back();
    }
    else{
        std::cout << "Deck is empty";
    }
    return nextCard;
}

void Deck::ShuffleCards()
{
    if(!this->m_DECK.empty()){
        auto rng = std::default_random_engine {};
        std::shuffle(std::begin(this->m_DECK), std::end(this->m_DECK), rng);
    }
    else{
       std::cout << "Vector is empty..";
    }

}

void Deck::UpdateDeckCount()
{
    this->m_deck_count = this->m_DECK.size();
}





