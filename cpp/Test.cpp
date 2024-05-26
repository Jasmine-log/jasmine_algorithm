/**
 * C Compiler : gcc
 * C++ Compiler: g++
*/

#include <iostream>
using namespace std;

using namespace Microsoft::Visualsutido::CppUnitTestFramework;



struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int main()
{
    //ListNode* tmp;
    //tmp->next = nullptr;// This is wrong, why is that?
    // Since here we created the box(tmp), but did not put the addres of an object in it.
    // The 2nd line says "at offset 4 from the address stored in tmp please wirt 0",
    // weell there is no valid address in the box so this fails

    //input is below
    //ListNode *head; //4->5->1->9
    ListNode* head = new ListNode(1);  
    head->next = nullptr;// This is right, what cause that?

    /**
     *
     * 
     * //ListNode* node = new ListNode(1);
    cout<< head<<endl;
    cout << node << endl;

    cout << "hello jasmine" << endl;

    ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    list->next = NULL;
    Push(&list, 1);
    Push(&list, 2);
    Push(&list, 3);
 
    printList(list);
 
    // Delete any position from list
    //deleteN(&list, 1);
    //printList(list);
     
     * 
    */
    return 0;
}

