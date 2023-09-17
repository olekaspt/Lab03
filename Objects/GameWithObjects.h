#pragma once
#include "PersonWithObjects.h"
#include "DeckWithObjects.h"
#include "../Card.h"



class GameWithObjects
{
	public:
		GameWithObjects();

		virtual ~GameWithObjects();

		void RunGame();

    private:

		void PrintOutQueueOfPeople();

		void PrintOutStackOfPeople();

		void PlayerTakeTurn(PersonWithObjects & player);
		void PlayersSwapCards();

        PersonWithObjects m_p1;
        PersonWithObjects m_p2;

        DeckWithObjects m_deck;
};