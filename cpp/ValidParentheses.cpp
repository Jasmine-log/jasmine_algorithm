#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char e : s)
        {
            if (e == '{' || e == '[' || e == '(')
                st.push(e);
            else
            {
                if (st.empty())
                    return false;
                else if (st.top() == '(' && e == ')' || st.top() == '{' && e == '}' || st.top() == '[' && e == ']'){
                    st.pop();               
                }
                else
                    return false;
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution Solution;

    cout << Solution.isValid("()") << endl;     // true
    cout << Solution.isValid("()[]{}") << endl; // true
    cout << Solution.isValid("(]") << endl;     // false
    cout << Solution.isValid("{()}") << endl;   // true
    cout << Solution.isValid("[") << endl;      // false
    cout << Solution.isValid("}") << endl;      // false
    cout << Solution.isValid("(){}}{") << endl; // false
    cout << Solution.isValid("([)])") << endl;  // false

    return 0;
}