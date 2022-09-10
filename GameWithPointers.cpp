#include "GameWithPointers.h"
#include <iostream>
#include <list>
#include "Card.h"
#include "PersonWithPointers.h"
#include "DeckWithPointers.h"

GameWithPointers::GameWithPointers()
{
    m_p1 = new PersonWithPointers("Huey 1");
    m_p2 = new PersonWithPointers("Louie 2");
    m_p3 = new PersonWithPointers("Dewey 3");
    m_deck = new DeckWithPointers();
}

GameWithPointers::~GameWithPointers()
{
    std::cout<<"GameWithPointers Destructor Called"<<std::endl;	
    delete m_p1;
    delete m_p2;
    delete m_p3;
    delete m_deck;

}

void GameWithPointers::PrintOutQueueOfPeople()
{
    for ( auto it1queue = queueOfPeople.begin();
         it1queue != queueOfPeople.end(); it1queue++)
    {

        std::cout << (*it1queue)->GetName() << " " << std::endl;
    }

    std::cout <<  std::endl;

}

void GameWithPointers::PrintOutStackOfPeople()
{
    for ( auto it1stack = stackOfPeople.begin();
         it1stack != stackOfPeople.end(); it1stack++)
    {

        std::cout << (*it1stack)->GetName() << " " << std::endl;
    }

    std::cout <<  std::endl;

}

void GameWithPointers::RunGame()
{


    Card * card1Pointer = new Card(1,1);
    std::cout<<"Calling Pointer Version"<<std::endl;
    m_p1->AddCardToHandPointer(card1Pointer);
    std::cout<<"End Calling Pointer Version"<<std::endl;

    //Draw a card from a deck
    m_p1->AddCardToHandPointer(m_deck->DrawCard());
    
    std::cout<<std::endl<<std::endl;

    std::cout<<"Stack\n";
    std::cout<<"   Push "<<m_p1->GetName()<<std::endl;
    stackOfPeople.push_front(m_p1);
    std::cout<<"   Push "<<m_p2->GetName()<<std::endl;
    stackOfPeople.push_front(m_p2);
    std::cout<<"   Push "<<m_p3->GetName()<<std::endl;
    stackOfPeople.push_front(m_p3);
    PrintOutStackOfPeople();


    std::cout<<"Queue\n"; 
    std::cout<<"   Enque "<<m_p1->GetName()<<std::endl;
    queueOfPeople.push_back(m_p1);
    std::cout<<"   Enque "<<m_p2->GetName()<<std::endl;
    queueOfPeople.push_back(m_p2);
    std::cout<<"   Enque "<<m_p3->GetName()<<std::endl;
    queueOfPeople.push_back(m_p3);
    PrintOutQueueOfPeople();    

    std::cout << "calling pop and Dequee" << std::endl;
    stackOfPeople.pop_front();
    queueOfPeople.pop_front();

    std::cout << "Stack" << std::endl;
    PrintOutStackOfPeople();

    std::cout << "Queue" << std::endl;
    PrintOutQueueOfPeople();

    std::cout << "calling clear methods" << std::endl;
    stackOfPeople.clear();
    queueOfPeople.clear();
}

