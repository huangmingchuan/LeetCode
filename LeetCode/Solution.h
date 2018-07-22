#pragma once

#include <vector>
#include <set>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

bool isEqualList(ListNode *l1, ListNode *l2)
{
	while (l1 && l2)
	{
		if (l1->val != l2->val)
		{
			return false;
		}
		l1 = l1->next;
		l2 = l2->next;
	}

	if ((l1 == nullptr) ^ (l2 == nullptr))
		return false;

	return true;
}

class Solution001
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> result;
		for (size_t i = 0; i < nums.size() - 1; ++i)
		{
			for (size_t j = i + 1; j < nums.size(); ++j)
			{
				if (nums[i] + nums[j] == target)
				{
					result.push_back(i);
					result.push_back(j);
				}
			}
		}

		return result;
	}
};

class Solution002
{
public:
	ListNode * addTwoNumber(ListNode* l1, ListNode* l2)
	{

	}
};