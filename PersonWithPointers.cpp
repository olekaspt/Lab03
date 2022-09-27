
#include "PersonWithPointers.h"
#include <iostream>

PersonWithPointers::PersonWithPointers(std::string name) :m_name(name)
{

}




std::string PersonWithPointers::GetName() const
{
    return m_name;
}

PersonWithPointers::~PersonWithPointers()
{
    std::cout << "Deleting PersonWithObjects" << m_name << std::endl;
    for(auto it = m_listOfCards.begin(); it != m_listOfCards.end(); it++)
    {
        delete *it;
    }
    m_listOfCards.clear();
}

bool PersonWithPointers::AddCardToHand( Card * c)  
{
    std::cout<<"   AddCardToHandPointer :"<<c->GetValue()<<" "<<c->GetSuit()<<" "<<c->GetGuid()<<std::endl;
    m_listOfCards.push_front(c);
    return true;
}

Card * PersonWithPointers::RemoveCardFromHand(int i)
{
    auto it = m_listOfCards.begin();
    if(i < 0 ||  i +1 > m_listOfCards.size())
    {
        throw "Position doesn't exist in hand";
    }
    advance(it, i);
    Card * retVal = *it;
    m_listOfCards.erase(it);
    return retVal;
}

void PersonWithPointers::PrintOutHand()
{
    for(auto it = m_listOfCards.begin(); it != m_listOfCards.end(); it++)
    {
        std::cout<<"   AddCardToHandPointer :"<<(*it)->GetValue()<<" "<<(*it)->GetSuit()<<" "<<(*it)->GetGuid()<<std::endl;
    }
}
