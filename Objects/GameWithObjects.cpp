
#include "GameWithObjects.h"
#include <iostream>


GameWithObjects::GameWithObjects(): m_p1("Huey 1"), m_p2("Louie 2"), m_deck()
{

}

GameWithObjects::~GameWithObjects()
{
    std::cout<<"GameWithObjects Destructor Called"<<std::endl;	
}

void GameWithObjects::PlayerTakeTurn(PersonWithObjects & player)
{
    std::cout<<"Start Drawing Cards"<<std::endl;
    std::cout<<"Drawing Cards 1"<<std::endl;
    player.AddCardToHand(std::move(m_deck.DrawCard()));
    std::cout<<"Drawing Cards 2"<<std::endl;
    player.AddCardToHand(std::move(m_deck.DrawCard()));
    std::cout<<"Drawing Cards 3"<<std::endl;
    player.AddCardToHand(std::move(m_deck.DrawCard()));
    std::cout<<"Drawing Cards 4"<<std::endl;
    player.AddCardToHand(std::move(m_deck.DrawCard()));

    std::cout << "Player::PrintOutHand" << std::endl;
    player.PrintOutHand();

    std::cout << "Returning Cards to Deck" << std::endl;
    m_deck.ReturnCard(std::move(player.RemoveCardFromHand(2)));
    m_deck.ReturnCard(std::move(player.RemoveCardFromHand(1)));
    m_deck.ReturnCard(std::move(player.RemoveCardFromHand(0)));

    std::cout << "Player::PrintOutHand" << std::endl;
    player.PrintOutHand();
}

void GameWithObjects::RunGame()
{

    std::cout << "PrintDeck" << std::endl;
    m_deck.PrintDeck();

    PlayerTakeTurn(m_p1);

    PlayerTakeTurn(m_p2);

}

