/*
 * CShape_test.cpp
 *
 *  Created on: Jul 3, 2016
 *      Author: pkorycin
 */

#include <iostream>
#include "src/CShape.h"
#include "gtest/gtest.h"
#include "boost/foreach.hpp"

using namespace std;

TEST(CShape, getID){
	// arrange
	CShape obj;
	int rcVal;
	int expVal = 1;

	// act
	rcVal = obj.GetID();

	// assert
	EXPECT_EQ(expVal, rcVal);
}

TEST(Boost, FOR_EACH){
	// arrange
	int tab[3];
	int expVal = 3;

	// act
	tab[0] = 3;
	tab[1] = 3;
	tab[2] = 3;

	// assert

	BOOST_FOREACH(int k, tab)
	{
		EXPECT_EQ(expVal, k);
	}
}


int main(int argc, char ** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

