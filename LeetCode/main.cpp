#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <vector>

#include "Solution.h"

using namespace std;

TEST_CASE("Solution001")
{
	SECTION("one")
	{
		Solution001 s;
		vector<int> nums{ 1,3,5,9 };
		int target = 10;
		vector<int> result{ 0,3 };

		REQUIRE(result == s.twoSum(nums, target));
	}

	SECTION("two")
	{
		Solution001 s;
		vector<int> nums{ 1,3,5,9 };
		int target = 8;
		vector<int> result{ 1,2 };

		REQUIRE(result == s.twoSum(nums, target));
	}
}
