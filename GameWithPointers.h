#pragma once
#include <list>

class DeckWithPointers;
class PersonWithPointers;

class GameWithPointers
{
	public:


		GameWithPointers();

		virtual ~GameWithPointers();

		void RunGame();
    private:
        PersonWithPointers *m_p1;
        PersonWithPointers *m_p2;
        PersonWithPointers *m_p3;
        DeckWithPointers * m_deck;
        std::list<PersonWithPointers*> stackOfPeople;
        std::list<PersonWithPointers*> queueOfPeople;
        void PrintOutQueueOfPeople();
        void PrintOutStackOfPeople();

};