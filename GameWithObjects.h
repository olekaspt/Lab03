#pragma once
#include "PersonWithObjects.h"
#include "DeckWithObjects.h"



class GameWithObjects
{
	public:
		GameWithObjects();

		virtual ~GameWithObjects();

		void RunGame();
    private:

		void PrintOutQueueOfPeople();

		void PrintOutStackOfPeople();

        PersonWithObjects m_p1;
        PersonWithObjects m_p2;
        PersonWithObjects m_p3;
        DeckWithObjects m_deck;
};