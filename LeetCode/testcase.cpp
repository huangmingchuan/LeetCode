#include "catch.hpp"
#include <vector>

#include "Solution.h"

using namespace std;

TEST_CASE("isEqualList")
{
	SECTION("one")
	{
		//todo: 改为 list，而非手写 ListNode
		ListNode node1(1);
		ListNode node2(2);
		ListNode node3(3);
		node1.next = &node2;
		node2.next = &node3;

		ListNode node4(1);
		ListNode node5(2);
		ListNode node6(3);
		node4.next = &node5;
		node5.next = &node6;

		auto &l1 = node1;
		auto &l2 = node4;

		REQUIRE(isEqualList(&l1, &l2));
	}

	SECTION("two")
	{
		ListNode node1(1);
		ListNode node2(2);
		ListNode node3(3);
		node1.next = &node2;
		node2.next = &node3;

		ListNode node4(4);
		ListNode node5(5);
		ListNode node6(6);
		node4.next = &node5;
		node5.next = &node6;

		auto &l1 = node1;
		auto &l2 = node4;

		REQUIRE_FALSE(isEqualList(&l1, &l2));
	}

	SECTION("three")
	{
		ListNode node1(1);
		ListNode node2(2);
		ListNode node3(3);
		node1.next = &node2;
		node2.next = &node3;

		ListNode node4(1);
		ListNode node5(2);
		ListNode node6(2);
		node4.next = &node5;
		node5.next = &node6;

		auto &l1 = node1;
		auto &l2 = node4;

		REQUIRE_FALSE(isEqualList(&l1, &l2));
	}

	SECTION("four")
	{
		ListNode *node1 = nullptr;
		ListNode *node2 = nullptr;

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

TEST_CASE("Solution002")
{
	SECTION("one")
	{
		Solution002 s;
		ListNode node3(3);
		ListNode node4(4);
		ListNode node2(2);
		node2.next = &node4;
		node4.next = &node3;
		auto &l1 = node2;

		ListNode node44(4);
		ListNode node6(6);
		ListNode node5(5);
		node5.next = &node6;
		node6.next = &node44;
		auto &l2 = node5;

		auto result = s.addTwoNumber(&l1, &l2);

	}
}