
#include "PersonWithObjects.h"
#include <iostream>

PersonWithObjects::~PersonWithObjects( )
{
    std::cout << "Deleting PersonWithObjects" << m_name << std::endl;
}

PersonWithObjects::PersonWithObjects(std::string name) :m_name(name)
{

}

PersonWithObjects::PersonWithObjects( const PersonWithObjects &p)
{
    std::cout<<"    BAD!!!! Copy Person Constructor being called.  I shouldn't really be callled!!!"<<std::endl;
    m_name = p.m_name;
}

PersonWithObjects::PersonWithObjects(PersonWithObjects && obj)
{
    std::cout <<"    Calling Person Move Constructor"<<std::endl;
    this->m_name = std::move(obj.m_name);
    this->m_listOfCards = std::move(obj.m_listOfCards);
    this->m_stackOfCards = std::move(obj.m_stackOfCards);
}


std::string PersonWithObjects::GetName() const
{
    return m_name;
}

void PersonWithObjects::AddCardToHand( Card  c)
{
    std::cout<<"   AddCardToHandObject :"<<c.GetValue()<<" "<<c.GetSuit() << " " << c.GetGuid() << std::endl;
    m_listOfCards.push_front(std::move(c));
}

void PersonWithObjects::AddCardToHand(Card & c)
{
    std::cout << "   AddCardToHandObject (by ref) :" << c.GetValue() << " " << c.GetSuit() << " " << c.GetGuid() << std::endl;
    m_listOfCards.push_front(std::move(c));
}

Card PersonWithObjects::RemoveCardFromHand()
{
    Card c = std::move(m_listOfCards.front());
    m_listOfCards.pop_front();
    return std::move(c);
}

void PersonWithObjects::PrintOutHand()
{
    auto it1queue = std::make_move_iterator(m_listOfCards.begin());
    auto it1queue_end = std::make_move_iterator(m_listOfCards.end());
    for (int i = 0; it1queue != it1queue_end; it1queue++)
    {
        std::cout << it1queue->GetSuit() << " " <<  it1queue->GetValue() << " " << it1queue->GetGuid() << " "<< std::endl;
    }
    std::cout << std::endl;
}
