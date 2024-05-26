#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (head->next == NULL)
            return true;
        int size = 1;
        ListNode *forward = head;
        ListNode *back = head;
        while (back->next != NULL)
        {
            size++;
            back = back->next;
        }
        back = head;
        for (int i = 0; i < size / 2; i++)
        {
            back = back->next;
        }
        ListNode *prev = NULL;
        ListNode *next = back->next;
        while (next != NULL)
        {
            back->next = prev;
            prev = back;
            back = next;
            next = next->next;
        }
        back->next = prev;
        while (back != NULL)
        {
            if (forward->val != back->val)
                return false;
            forward = forward->next;
            back = back->next;
        }
        return true;
    }
};

//Reverse All
bool isPalindrome2(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return (head);
    }
    ListNode *r_head = NULL;
    ListNode *ptr = head;
    while (ptr != NULL)
    {
        ListNode *temp = new ListNode(ptr->val);
        temp->next = r_head;
        r_head = temp;
        ptr = ptr->next;
    }
    while (head && r_head)
    {
        if (head->val != r_head->val)
        {
            return false;
        }
        head = head->next;
        r_head = r_head->next;
    }
    return true;
};
