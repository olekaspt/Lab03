
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
    // TODO need to iterate and delete the pointers if you decide the person owns the Cards
}

void PersonWithPointers::AddCardToHandPointer( Card * c)  
{
    std::cout<<"   AddCardToHandPointer :"<<c->GetValue()<<" "<<c->GetSuit()<<std::endl;
    m_listOfCardsPointer.push_front(c);
}

