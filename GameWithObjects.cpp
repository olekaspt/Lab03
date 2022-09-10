
#include "GameWithObjects.h"
#include <iostream>


GameWithObjects::GameWithObjects(): m_p1("Huey 1"), m_p2("Louie 2"), m_p3("Dewey 3"), m_deck()
{

}

GameWithObjects::~GameWithObjects()
{
    std::cout<<"GameWithObjects Destructor Called"<<std::endl;	
}

void GameWithObjects::PrintOutQueueOfPeople()
{
    auto it1queue = std::make_move_iterator(m_queueOfPeople.begin());
    auto it1queue_end = std::make_move_iterator(m_queueOfPeople.end());
    for ( int i=0; it1queue != it1queue_end; it1queue++)
    {

        std::cout << it1queue->GetName() << " " << std::endl;
    }
    std::cout <<  std::endl;
}

void GameWithObjects::PrintOutStackOfPeople()
{
    std::cout <<  std::endl;
    auto it1stack = std::make_move_iterator(m_stackOfPeople.begin());
    auto it1stack_end = std::make_move_iterator(m_stackOfPeople.end());
    for ( int i=0; it1stack != it1stack_end; it1stack++)
    {

        std::cout << it1stack->GetName() << " " << std::endl;
    }
    std::cout <<  std::endl;
}

void GameWithObjects::RunGame()
{


    Card card1Object = Card(11,1);
    std::cout<<"Calling AddCardToHandObject"<<std::endl;
    m_p1.AddCardToHandObject(std::move(card1Object));
    std::cout<<"End Calling AddCardToHandObject"<<std::endl;
    std::cout<<std::endl<<std::endl;

    std::cout<<"Start Drawing Cards"<<std::endl;
    m_p1.AddCardToHandObject(std::move(m_deck.DrawCard()));
    m_p1.AddCardToHandObject(std::move(m_deck.DrawCard()));
    m_p2.AddCardToHandObject(std::move(m_deck.DrawCard()));
    m_p2.AddCardToHandObject(std::move(m_deck.DrawCard()));
    m_p3.AddCardToHandObject(std::move(m_deck.DrawCard()));
    m_p3.AddCardToHandObject(std::move(m_deck.DrawCard()));

    std::cout << "P1 Player::PrintOutHand" << std::endl;
    m_p1.PrintOutHand();
    std::cout << "P2 Player::PrintOutHand" << std::endl;
    m_p2.PrintOutHand();
    std::cout << "P4 Player::PrintOutHand" << std::endl;
    m_p3.PrintOutHand();
    std::cout << "End Player::PrintOutHand" << std::endl;

    std::cout << "PrintDeck" << std::endl;
    m_deck.PrintDeck();

    m_deck.ReturnCard(std::move(m_p1.RemoveCardFromHand()));
    m_deck.ReturnCard(std::move(m_p1.RemoveCardFromHand()));

    m_deck.ReturnCard(std::move(m_p2.RemoveCardFromHand()));
    m_deck.ReturnCard(std::move(m_p3.RemoveCardFromHand()));

    std::cout << "PrintDeck" << std::endl;
    m_deck.PrintDeck();
    std::cout << "P1 Player::PrintOutHand" << std::endl;
    m_p1.PrintOutHand();
    std::cout << "P2 Player::PrintOutHand" << std::endl;
    m_p2.PrintOutHand();
    std::cout << "P4 Player::PrintOutHand" << std::endl;
    m_p3.PrintOutHand();
    std::cout << "End Player::PrintOutHand" << std::endl;

#if 0
    std::cout<<"Stack\n";
    std::cout<<"   Push "<<m_p1.GetName()<<std::endl;
    m_stackOfPeople.push_front(std::move(m_p1));
    std::cout<<"   Push "<<m_p2.GetName()<<std::endl;
    m_stackOfPeople.push_front(std::move(m_p2));
    std::cout<<"   Push "<<m_p3.GetName()<<std::endl;
    m_stackOfPeople.push_front(std::move(m_p3));

    PrintOutStackOfPeople();

    std::cout<<"Queue\n";
    std::cout<<"   Enque "<<m_p1.GetName()<<std::endl;
    m_queueOfPeople.push_back(std::move(m_p1));
    std::cout<<"   Enque "<<m_p2.GetName()<<std::endl;
    m_queueOfPeople.push_back(std::move(m_p2));
    std::cout<<"   Enque "<<m_p3.GetName()<<std::endl;
    m_queueOfPeople.push_back(std::move(m_p3));


    PrintOutQueueOfPeople();

    std::cout << "calling pop and Dequee" << std::endl;
    m_stackOfPeople.pop_front();
    m_queueOfPeople.pop_front();

    std::cout << "Stack" << std::endl;
    PrintOutStackOfPeople();

    std::cout << "Queue" << std::endl;
    PrintOutQueueOfPeople();

#endif



    std::cout << "calling clear methods" << std::endl;
    m_stackOfPeople.clear();
    m_queueOfPeople.clear();
    std::cout << "calling delete" << std::endl;
}

