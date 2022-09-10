#pragma once

#include "Card.h"
#include <string>
#include <list>

class PersonWithPointers
{
public:
	PersonWithPointers(std::string name) ;
	PersonWithPointers() = delete;

	PersonWithPointers( const PersonWithPointers &p) = delete;

	PersonWithPointers(PersonWithPointers && obj) = delete;


	std::string GetName() const;

	virtual ~PersonWithPointers();

	void AddCardToHandPointer( Card * c);


    private: 
        std::string m_name;

        std::list< Card *> m_stackOfCardsPointer;
        std::list< Card *> m_listOfCardsPointer;

};