#include "catch.hpp"
#include <vector>

#include "Solution.h"

using namespace std;

TEST_CASE("isEqualList")
{
    SECTION("one")
    {
        LinkedList list1{ 1,2,3 };
        LinkedList list2{ 1,2,3 };

        REQUIRE(isEqualList(list1, list2));
    }

    SECTION("two")
    {
        LinkedList list1{ 1,2,3 };
        LinkedList list2{ 4,5,6 };

        REQUIRE_FALSE(isEqualList(list1, list2));
    }

    SECTION("three")
    {
        LinkedList list1{ 1,2,3 };
        LinkedList list2{ 1,2,2 };

        REQUIRE_FALSE(isEqualList(list1, list2));

    }

    SECTION("four")
    {
		LinkedList node1;
		LinkedList node2;

        REQUIRE(isEqualList(node1, node2));
    }
}

TEST_CASE("Solution001")
{
    SECTION("one")
    {
        Solution001 s;
        vector<int> nums{ 1,3,5,9 };
        int target = 10;
        vector<int> result{ 3,0 };

        REQUIRE(result == s.twoSum(nums, target));
    }

    SECTION("two")
    {
        Solution001 s;
        vector<int> nums{ 1,3,5,9 };
        int target = 8;
        vector<int> result{ 2,1 };

        REQUIRE(result == s.twoSum(nums, target));
    }
}

TEST_CASE("Solution002")
{
    SECTION("one")
    {
        Solution002 s;

        LinkedList list1{ 2,4,3 };
        LinkedList list2{ 3,6,4 };
        LinkedList r{ 5,0,8 };

        auto result = s.addTwoNumber(list1.first(), list2.first());

        REQUIRE(isEqualList(result, r));

    }

    SECTION("two")
    {
        Solution002 s;
        
        LinkedList list1{ 2,4,3 };
        LinkedList list2{ 5,6,4 };
        LinkedList r{ 7,0,9 };

        REQUIRE_FALSE(isEqualList(r, s.addTwoNumber(list1.first(), list2.first())));
    }

}

TEST_CASE("Solution003")
{
    SECTION("one")
    {
        Solution003 s;
        string s1{ "abcabcbb" };
        int len = 3;

        REQUIRE(len == s.lengthOfLongestSubstring(s1));
    }

    SECTION("two")
    {
        Solution003 s;
        string s1{ "bbbbb" };
        int len = 1;

        REQUIRE(len == s.lengthOfLongestSubstring(s1));
    }

    SECTION("three")
    {
        Solution003 s;
        string s1{ "pwwkew" };
        int len = 3;

        REQUIRE(len == s.lengthOfLongestSubstring(s1));
    }

    SECTION("four")
    {
        Solution003 s;
        string s1{ "123456122" };
        int len = 6;

        REQUIRE(len == s.lengthOfLongestSubstring(s1));
    }
}

TEST_CASE("Solution004")
{
    SECTION("one")
    {
        Solution004 s;
        vector<int> num1{ 1,3 };
        vector<int> num2{ 2 }; 
        double result = 2;

        REQUIRE(result == s.findMedianSortedArrays(num1, num2));
    }

	SECTION("two")
	{
		Solution004 s;
		vector<int> num1{ 1,2 };
		vector<int> num2{ 3,4 };
		double result = 2.5;

		REQUIRE(result == s.findMedianSortedArrays(num1, num2));
	}

	SECTION("three")
	{
		Solution004 s;
		vector<int> num1{ 1,2,3 };
		vector<int> num2;
		double result = 2;

		REQUIRE(result == s.findMedianSortedArrays(num1, num2));
	}

	SECTION("four")
	{
		Solution004 s;
		vector<int> num1;
		vector<int> num2{ 1,2,3,4,5 };
		double result = 3;

		REQUIRE(result == s.findMedianSortedArrays(num1, num2));
	}
}

TEST_CASE("Solution005")
{
	SECTION("one")
	{
		Solution005 s;
		string input{ "babad" };
		string out1{ "bab" };
		string out2{ "aba" };

		//REQUIRE(out1 == s.longestPalindrome(input));

		//REQUIRE(out2 == s.longestPalindrome(input));
	}

	SECTION("two")
	{
		Solution005 s;
		string input{ "cbbd" };
		string out1{ "bb" };

		//REQUIRE(out1 == s.longestPalindrome(input));
	}
}


TEST_CASE("Solution006")
{
	SECTION("one")
	{
		Solution006 s;


		REQUIRE(true);
	}
}

