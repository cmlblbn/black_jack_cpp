#ifndef DECK_H
#define DECK_H
#include <vector>
#include "card.h"


class Deck
{
private:
    int m_deck_count = 0;
    int const deck_size = 52;
    std::vector<Card> m_DECK;

public:
    Deck();
    Deck(int deck_count);
    void setDeckVector(){this->m_DECK = std::vector<Card>();}
    std::vector<Card> getDeckVector(){return this->m_DECK;}
    void setDeckCount(int deck_count){this->m_deck_count = deck_count;}
    int getDeckCount(){return this->m_deck_count;}
    //Setter and Getter defined


    void mDeckPushCard(Card card);     //How to append a Card to Deck
    Card mDeckPullCard();     //How to get a card from deck..

    void ShuffleCards();    //Shuffle to Deck
    void UpdateDeckCount();      //Update the deck count



};

#endif // DECK_H
