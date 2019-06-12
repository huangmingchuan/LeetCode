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

		REQUIRE(out1 == s.longestPalindrome(input));
	}

	SECTION("two")
	{
		Solution005 s;
		string input{ "cbbd" };
		string out1{ "bb" };

		REQUIRE(out1 == s.longestPalindrome(input));
	}
}


TEST_CASE("Solution006")
{
	SECTION("one")
	{
		Solution006 s;
        string input{ "PAYPALISHIRING" };
        string output{ "PAHNAPLSIIGYIR" };

        REQUIRE(output == s.convert(input, 3));
	}

    SECTION("two")
    {
        Solution006 s;
        string input{ "PAYPALISHIRING" };
        string output{ "PINALSIGYAHRPI" };

        REQUIRE(output == s.convert(input, 4));
    }
}

TEST_CASE("Solution007")
{
    SECTION("one")
    {
        Solution007 s;
        int i = 123;
        int o = 321;

        REQUIRE(o == s.reverse(i));
    }

    SECTION("two")
    {
        Solution007 s;
        int i = -123;
        int o = -321;

        REQUIRE(o == s.reverse(i));
    }

    SECTION("three")
    {
        Solution007 s;
        int i = 120;
        int o = 21;

        REQUIRE(o == s.reverse(i));
    }
}


TEST_CASE("Solution008")
{
    SECTION("one")
    {
        Solution008 s;
        string i{ "42" };
        int o = 42;

        REQUIRE(o == s.myAtoi(i));
    }

    SECTION("two")
    {
        Solution008 s;
        string i{ "   -42" };
        int o = -42;

        REQUIRE(o == s.myAtoi(i));
    }

    SECTION("three")
    {
        Solution008 s;
        string i{ "4193 with words" };
        int o = 4193;

        REQUIRE(o == s.myAtoi(i));
    }

    SECTION("four")
    {
        Solution008 s;
        string i{ "words and 987" };
        int o = 0;

        REQUIRE(o == s.myAtoi(i));
    }

    SECTION("five")
    {
        Solution008 s;
        string i{ "-91283472332" };
        int o = INT_MIN;

        REQUIRE(o == s.myAtoi(i));
    }
}


TEST_CASE("Solution009")
{
    SECTION("one")
    {
        Solution009 s;
        int i = 121;
        bool o = true;

        REQUIRE(o == s.isPalindrome(i));
    }

    SECTION("two")
    {
        Solution009 s;
        int i = -121;
        bool o = false;

        REQUIRE(o == s.isPalindrome(i));
    }

    SECTION("three")
    {
        Solution009 s;
        int i = 10;
        bool o = false;

        REQUIRE(o == s.isPalindrome(i));
    }
}


TEST_CASE("Solution010")
{
    SECTION("one")
    {
        Solution010 solution;
        string s{ "aa" };
        string p{ "a" };
        bool o = false;

        REQUIRE(o == solution.isMatch(s, p));
    }

    SECTION("two")
    {
        Solution010 solution;
        string s{ "aa" };
        string p{ "a*" };
        bool o = true;

        REQUIRE(o == solution.isMatch(s, p));
    }

    SECTION("three")
    {
        Solution010 solution;
        string s{ "aa" };
        string p{ ".*" };
        bool o = true;

        REQUIRE(o == solution.isMatch(s, p));
    }

    SECTION("four")
    {
        Solution010 solution;
        string s{ "aab" };
        string p{ "c*a*b" };
        bool o = true;

        REQUIRE(o == solution.isMatch(s, p));
    }

    SECTION("five")
    {
        Solution010 solution;
        string s{ "mississippi" };
        string p{ "mis*is*p*." };
        bool o = false;

        REQUIRE(o == solution.isMatch(s, p));
    }
}

TEST_CASE("Solution011")
{
    SECTION("one")
    {

    }

    SECTION("two")
    {

    }

    SECTION("three")
    {

    }
}

TEST_CASE("Solution012")
{
    SECTION("one")
    {

    }

    SECTION("two")
    {

    }

    SECTION("three")
    {

    }
}