#pragma once
#include <list>
#include <memory>

//Fwd declaration
class Card;

class DeckWithSmartPointers
{
    public:
        DeckWithSmartPointers();
        virtual ~DeckWithSmartPointers();

        std::shared_ptr<Card> DrawCard();
        bool ReturnCard(std::shared_ptr<Card> c);

        void PrintDeck();

    private:

        std::list<std::shared_ptr<Card>> m_deck;

};