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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        //ctrl+K+F

        int array[100] = {4,5,1,9,};
        for(int i=0;i<array)
        ListNode node0(4);
        ListNode node1(5);
        ListNode node2(1);
        ListNode node3(9);
        node0.next=&node1;
        node1.next=&node2;
        node2.next=&node3;

        ListNode* head = &node0;

    }
};




//https://learn.microsoft.com/ko-kr/visualstudio/test/how-to-use-microsoft-test-framework-for-cpp?view=vs-2022