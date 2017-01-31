#include <gtest/gtest.h>
#include "../library/Library.h"

TEST(LibraryGetTen, ReturnsTen) {
	Library lib {};
	ASSERT_EQ(lib.GetTen(), 10);
}


int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


