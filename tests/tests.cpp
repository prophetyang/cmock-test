#include "mock_librandom.h"
#include <iostream>

using ::testing::Invoke;
using ::testing::Return;

using std::cout;
using std::endl;

TEST(CMOCK_TEST, using_real_function) {
	MOCK_LIBRANDOM mock;
	int max_range = 10;
	int actual_result = 0;

	EXPECT_FUNCTION_CALL(mock, (max_range)).WillOnce(Invoke(MOCK_LIBRANDOM::real));

	EXPECT_GE(max_range, generate_random_number(max_range));
}

TEST(CMOCK_TEST, using_mock_function) {
	MOCK_LIBRANDOM mock;
	int max_range = 10;
	int expect_result = 100;

	EXPECT_FUNCTION_CALL(mock, (max_range)).WillOnce(Return(expect_result));

	EXPECT_EQ(expect_result, generate_random_number(max_range));
}
