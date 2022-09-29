
#include "PersonWithSmartPointers.h"
#include <iostream>

PersonWithSmartPointers::PersonWithSmartPointers(std::string name) :m_name(name)
{

}




std::string PersonWithSmartPointers::GetName() const
{
    return m_name;
}

PersonWithSmartPointers::~PersonWithSmartPointers()
{
    std::cout << "Deleting PersonWithObjects" << m_name << std::endl;
    
}

bool PersonWithSmartPointers::AddCardToHand(std::shared_ptr<Card> c)  
{
    std::cout<<"   AddCardToHandPointer :"<<c->GetValue()<<" "<<c->GetSuit()<<" "<<c->GetGuid()<<std::endl;
    m_listOfCards.push_front(c);
    return true;
}



std::shared_ptr<Card> PersonWithSmartPointers::RemoveCardFromHand(int i)  
{
    auto it = m_listOfCards.begin();
    if(i < 0 ||  i +1 > m_listOfCards.size())
    {
        throw "Position doesn't exist in hand";
    }
    advance(it, i);
    std::shared_ptr<Card> retVal = *it;
    m_listOfCards.erase(it);
    return retVal;
}


void PersonWithSmartPointers::PrintOutHand()  
{
    
    for(auto it = m_listOfCards.begin(); it != m_listOfCards.end(); it++)
    {
        std::cout<<"   AddCardToHandPointer :"<<(*it)->GetValue()<<" "<<(*it)->GetSuit()<<" "<<(*it)->GetGuid()<<std::endl;
    }
}

