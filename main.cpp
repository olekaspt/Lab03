
#include <iostream>
#include <string>
#include <list>
#include "GameWithPointers.h"
#include "GameWithObjects.h"
#include "GameWithSmartPointers.h"

int main()
{
	std::cout << "GameWithObjects constructed" << std::endl;
	GameWithObjects game1;
	std::cout << "Now Run Game" << std::endl;
	game1.RunGame();


	std::cout << "GameWithPointers constructed" << std::endl;
	GameWithPointers game2;
	std::cout << "Now Run Game" << std::endl;
	game2.RunGame();

	std::cout << "GameWithSmartPointers constructed" << std::endl;
	GameWithSmartPointers game3;
	std::cout << "Now Run Game" << std::endl;
	game3.RunGame();

    return 0;
}

