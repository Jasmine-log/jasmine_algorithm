#include <iostream>
using namespace std;


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *first_pointer = head, *second_pointer = head;
        while (second_pointer != nullptr && second_pointer->next != nullptr) {
            first_pointer = first_pointer->next;
            second_pointer = second_pointer->next->next;
            if (first_pointer == second_pointer) {
                return true;
            }
        }
        return false;
    }
};
