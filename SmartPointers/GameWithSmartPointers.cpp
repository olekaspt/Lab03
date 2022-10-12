#include "GameWithSmartPointers.h"
#include <iostream>
#include <list>
#include "../Card.h"
#include "PersonWithSmartPointers.h"
#include "DeckWithSmartPointers.h"

GameWithSmartPointers::GameWithSmartPointers()
{
    m_p1 = std::make_shared<PersonWithSmartPointers>("Huey 1");
    m_p2 = std::make_shared<PersonWithSmartPointers>("Louie 2");
    m_deck = std::make_unique<DeckWithSmartPointers> ();
}

GameWithSmartPointers::~GameWithSmartPointers()
{
    std::cout<<"GameWithSmartPointers Destructor Called"<<std::endl;	

}

void GameWithSmartPointers::PlayerTakeTurn(std::shared_ptr<PersonWithSmartPointers> player)
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

void GameWithSmartPointers::RunGame()
{

    std::cout << "PrintDeck" << std::endl;
    m_deck->PrintDeck();

    PlayerTakeTurn(m_p1);

    PlayerTakeTurn(m_p2);


}

