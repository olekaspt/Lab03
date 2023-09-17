#include "GameWithPointers.h"
#include <iostream>
#include <list>
#include "../Card.h"
#include "PersonWithPointers.h"
#include "DeckWithPointers.h"

GameWithPointers::GameWithPointers()
{
    m_p1 = new PersonWithPointers("Huey 1");
    m_p2 = new PersonWithPointers("Louie 2");
    m_deck = new DeckWithPointers();
}

GameWithPointers::~GameWithPointers()
{
    std::cout<<"GameWithPointers Destructor Called"<<std::endl;	
    delete m_p1;
    delete m_p2;
    delete m_deck;

}

void GameWithPointers::PlayerTakeTurn(PersonWithPointers* player)
{
    std::cout<<"Start Drawing Cards"<<std::endl;
    std::cout<<"Drawing Cards 1"<<std::endl;
    player->AddCardToHand(m_deck->DrawCard());
    std::cout<<"Drawing Cards 2"<<std::endl;
    player->AddCardToHand(m_deck->DrawCard());
    std::cout<<"Drawing Cards 3"<<std::endl;
    player->AddCardToHand(m_deck->DrawCard());
    std::cout<<"Drawing Cards 4"<<std::endl;
    player->AddCardToHand(m_deck->DrawCard());

    std::cout << "Player::PrintOutHand" << std::endl;
    player->PrintOutHand();

    std::cout << "Returning Cards to Deck" << std::endl;
    m_deck->ReturnCard(player->RemoveCardFromHand(2));
    m_deck->ReturnCard(player->RemoveCardFromHand(1));
    m_deck->ReturnCard(player->RemoveCardFromHand(0));

    std::cout << "Player::PrintOutHand" << std::endl;
    player->PrintOutHand();
}

void GameWithPointers::PlayersSwapCards()
{
}

void GameWithPointers::RunGame()
{
    std::cout << "PrintDeck" << std::endl;
    m_deck->PrintDeck();

    PlayerTakeTurn(m_p1);

    PlayerTakeTurn(m_p2);

    PlayersSwapCards();

}

