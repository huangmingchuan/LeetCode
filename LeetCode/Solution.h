#pragma once

#include <vector>
#include <set>
#include <unordered_map>
#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class LinkedList
{
public:
    LinkedList() 
    {
        head = new ListNode(0);
    }

    LinkedList(initializer_list<int> l) : LinkedList()
    {
        auto p = head;
        for (auto i : l)
        {
            p->next = new ListNode(i);
            p = p->next;
        }
    }

	LinkedList(ListNode* l) : LinkedList()
	{
		auto p = head;
		p->next = l;
	}

    ListNode* first()
    {
        return head->next;
    }

private:
    ListNode * head;
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

bool isEqualList(ListNode *l1, LinkedList& list2)
{
	ListNode *l2 = list2.first();

	return isEqualList(l1, l2);
}

bool isEqualList(LinkedList& list1, ListNode *l2)
{
	ListNode *l1 = list1.first();

	return isEqualList(l1, l2);
}

bool isEqualList(LinkedList& list1, LinkedList& list2)
{
	ListNode *l1 = list1.first();
	ListNode *l2 = list2.first();

	return isEqualList(l1, l2);
}

class Solution001
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
		unordered_map<int, int> imap;

		for (int i = 0;; ++i) {
			auto it = imap.find(target - nums[i]);

			if (it != imap.end())
				return vector<int> {i, it->second};

			imap[nums[i]] = i;
		}
    }
};

class Solution002
{
public:
    ListNode * addTwoNumber(ListNode* l1, ListNode* l2)
    {
		ListNode preHead(0), *p = &preHead;
		int extra = 0;
		while (l1 || l2 || extra) {
			if (l1) extra += l1->val, l1 = l1->next;
			if (l2) extra += l2->val, l2 = l2->next;
			p->next = new ListNode(extra % 10);
			extra /= 10;
			p = p->next;
		}
		return preHead.next;
    }
};

class Solution003
{
public:
    int lengthOfLongestSubstring(string s)
    {
		vector<int> dict(256, -1);
		int maxLen = 0, start = -1;
		for (int i = 0; i != s.length(); i++) {
			if (dict[s[i]] > start)
				start = dict[s[i]];
			dict[s[i]] = i;
			maxLen = max(maxLen, i - start);
		}
		return maxLen;
    }
};

class Solution004
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        double result = 0;

        return result;
    }
};

class Solution005
{
public:

};

class Solution006
{
public:

};