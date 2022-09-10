#pragma once
#include <list>


//Fwd declaration
class Card;

class DeckWithPointers
{
    public:
        DeckWithPointers();
        virtual ~DeckWithPointers();

        Card * DrawCard();
        void ReturnCard(Card * c);

    private:

        std::list<Card *> m_deck;

};