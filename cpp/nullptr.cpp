#include <iostream>
using namespace std;


int main()
{

    int *ptr1 = 0; // 변수 포인터
    int *ptr2 = nullptr;
    int *ptr3 = NULL;

    void (*func1)(int a, int b) = nullptr; // 함수포인터
    void (*func2)() = nullptr;

    //pointed value, addres of pointer
    cout << ptr1 << " : " << &ptr1 << " : " << endl;
    cout << ptr2 << " : " << &ptr2 << " : " << endl;
    cout << ptr3 << " : " << &ptr3 << " : " << endl;
    
    return 0;
}

