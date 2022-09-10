
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
    this->m_listOfCardsObject = std::move(obj.m_listOfCardsObject);
    this->m_stackOfCardsObject = std::move(obj.m_stackOfCardsObject);
}


std::string PersonWithObjects::GetName() const
{
    return m_name;
}

void PersonWithObjects::AddCardToHandObject( Card  c)
{
    std::cout<<"   AddCardToHandObject1 :"<<c.GetValue()<<" "<<c.GetSuit()<<std::endl;
    m_listOfCardsObject.push_front(std::move(c));
}

void PersonWithObjects::AddCardToHandObject(Card & c)
{
    std::cout << "   AddCardToHandObject2 :" << c.GetValue() << " " << c.GetSuit() << std::endl;
    m_listOfCardsObject.push_front(std::move(c));
}

Card PersonWithObjects::RemoveCardFromHand()
{
    Card c = std::move(m_listOfCardsObject.front());
    m_listOfCardsObject.pop_front();
    return std::move(c);
}

void PersonWithObjects::PrintOutHand()
{
    auto it1queue = std::make_move_iterator(m_listOfCardsObject.begin());
    auto it1queue_end = std::make_move_iterator(m_listOfCardsObject.end());
    for (int i = 0; it1queue != it1queue_end; it1queue++)
    {
        std::cout << it1queue->GetSuit() << " " <<  it1queue->GetValue() << " " << std::endl;
    }
    std::cout << std::endl;
}
