
#include <iostream>
#include <string>
#include <list>
#include "Pointers/GameWithPointers.h"
#include "Objects/GameWithObjects.h"
#include "SmartPointers/GameWithSmartPointers.h"


void CallGameWithObjects()
{
	std::cout << "=========================================" << std::endl;
	std::cout << "GameWithObjects constructed" << std::endl;
	GameWithObjects game1;
	std::cout << "Now Run Game" << std::endl;
	game1.RunGame();
	std::cout << "=========================================" << std::endl;
}


void CallGameWithPointers()
{
	std::cout << "=========================================" << std::endl;
	std::cout << "GameWithPointers constructed" << std::endl;
	GameWithPointers game2;
	std::cout << "Now Run Game" << std::endl;
	game2.RunGame();
	std::cout << "=========================================" << std::endl;
}


void CallGameWithSmartPointers()
{
	std::cout << "=========================================" << std::endl;
	std::cout << "GameWithSmartPointers constructed" << std::endl;
	GameWithSmartPointers game3;
	std::cout << "Now Run Game" << std::endl;
	game3.RunGame();
	std::cout << "=========================================" << std::endl;
}

void CheatingAdd(Card c)
{
    // Blah blah
    std::cout<<"I am cheating"<<std::endl;	
}

void NotCheatingAdd(Card &c)
{
    // Blah blah
    std::cout<<"I am not cheating"<<std::endl;	
}

void RunCheatGame()
{
    Card card1Object = Card(11,1);

    CheatingAdd(card1Object);
    
	NotCheatingAdd(card1Object);

    std::cout<<std::endl<<std::endl;
}

int main()
{
	int pick = -1;
	std::cout << "Pick which option to run."<< std::endl;
	std::cout << "1 show cheating"<< std::endl;
	std::cout << "2 RAII and Move operator"<< std::endl;
	std::cout << "3 Dumb Pointers"<< std::endl;
	std::cout << "4 Smart Pointers"<< std::endl;
	std::cin >> pick;

	if(pick < 1 || pick > 4)
	{
		std::cout <<"Error wrong pick"<<std::endl;
	}


	std::cout << "Start" << std::endl;
	if(pick == 1)
	{
		std::cout << "Calling CallGameWithCheating" << std::endl;
		RunCheatGame();
	}
	else if (pick == 2)
	{
		std::cout << "Calling CallGameWithObjects" << std::endl;
		CallGameWithObjects();
	}
	else if (pick == 3)
	{
		std::cout << "Calling CallGameWithPointers" << std::endl;
		CallGameWithPointers();
	}
	else if (pick == 4)
	{
		std::cout << "Calling CallGameWithSmartPointers" << std::endl;
		CallGameWithSmartPointers();
	}

	std::cout << "End" << std::endl;
    return 0;
}

