#pragma once

#include "Card.h"
#include <string>
#include <list>

class PersonWithObjects
{
public:
	PersonWithObjects(std::string name) ;

	PersonWithObjects() = delete;

	PersonWithObjects(const PersonWithObjects &p);

	PersonWithObjects(PersonWithObjects && obj);


	std::string GetName() const;

	virtual ~PersonWithObjects();

	void AddCardToHandObject(Card  c);
	void AddCardToHandObject(Card& c);
	Card RemoveCardFromHand();
	void PrintOutHand();

    private: 
        std::string m_name;
        std::list< Card > m_stackOfCardsObject;
        std::list< Card > m_listOfCardsObject;

};