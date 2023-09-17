#pragma once
#include <list>
#include <memory>

class DeckWithSmartPointers;
class PersonWithSmartPointers;

class GameWithSmartPointers
{
	public:


		GameWithSmartPointers();

		virtual ~GameWithSmartPointers();

		void RunGame();
    private:

        void PlayerTakeTurn(std::unique_ptr<PersonWithSmartPointers> & player);
        void PlayersSwapCards();

        std::unique_ptr<PersonWithSmartPointers> m_p1;
        std::unique_ptr<PersonWithSmartPointers> m_p2;

        std::unique_ptr<DeckWithSmartPointers> m_deck;
        void PrintOutQueueOfPeople();
        void PrintOutStackOfPeople();

};