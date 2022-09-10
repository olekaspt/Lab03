
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
    // TODO need to iterate and delete the pointers if you decide the person owns the Cards
}

void PersonWithSmartPointers::AddCardToHandPointer(std::shared_ptr<Card> c)  
{
    std::cout<<"   AddCardToHandPointer :"<<c->GetValue()<<" "<<c->GetSuit()<<std::endl;
    m_listOfCardsPointer.push_front(c);
}

