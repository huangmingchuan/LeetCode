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
        ListNode *result = nullptr;
        int num = listToNumber(l1) + listToNumber(l2);
        result = numberToList(num);
        return result;
    }

private:
    int listToNumber(ListNode *l)
    {
        int result = 0, base = 1;

        while (l)
        {
            result = result + base * l->val;
            base *= 10;
            l = l->next;
        }

        return result;
    }

    ListNode * numberToList(int num)
    {
        ListNode head(0);
        ListNode *p = &head;

        while (num)
        {
            p->next = new ListNode(num % 10);
            p = p->next;
            num /= 10;
        }

        return head.next;
    }
};

class Solution003
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int result = 0, max;
        for (auto it1 = s.begin(); it1 != s.end(); ++it1)
        {
            max = 0;
            set<int> set_temp;
            for (auto it2 = it1; it2 != s.end(); ++it2)
            {
                if (!set_temp.insert(*it2).second)
                {
                    max = it2 - it1;
                    if (max > result)
                    {
                        result = max;
                    }
                    break;
                }
            }
        }
        return result;
    }
};