#include "gtest/gtest.h"
#include <iostream>
#include <fstream>
#include <string>
#include "functions.h"

using namespace std;

TEST(altarTests, deleteFile){
	//create a file to test on
	string testFileName = "ayxfmpct";
	ofstream create;
	create.open(testFileName);
	create.close();
	//run the code
	int expResult = 1620;
	int result = consumeFile(testFileName);
	//check results
	ASSERT_EQ(false, ifstream(testFileName));
	ASSERT_EQ(expResult, result);

}

TEST(altarTests, giftOfGluttony){
	string gematriaName = "ayxfmpct";
	int gematriaValue = 1620;
	int expectedSize = (gematriaValue - (1000 % gematriaValue)) * 1024;
	createGluttonyFile(gematriaName, gematriaValue);
	ifstream checkSize(gematriaName, ifstream::ate | ifstream::binary);
	int result = checkSize.tellg();
	EXPECT_EQ(expectedSize, result);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	system("pause");
}