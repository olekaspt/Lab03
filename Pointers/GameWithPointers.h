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

        void PlayerTakeTurn(PersonWithPointers* player);
        void PlayersSwapCards();
        
        PersonWithPointers *m_p1;
        PersonWithPointers *m_p2;

        DeckWithPointers * m_deck;
        void PrintOutQueueOfPeople();
        void PrintOutStackOfPeople();

};