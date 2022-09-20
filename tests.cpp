// tests.cpp
#include "Card.h"
#include "PersonWithObjects.h"
#include <gtest/gtest.h>


		
 		TEST(GameWithOjects,TestBlah1)
		{
			PersonWithObjects p("Test");
			Card c = Card(1,2);
			
			bool success = p.AddCardToHand(std::move(c));

			EXPECT_TRUE(success);




		}
 		TEST(GameWithOjects,TestBlah2)
		{

		}
		

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
