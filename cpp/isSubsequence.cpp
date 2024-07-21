#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int sp = 0;
        int tp = 0;

        while (sp < s.length() && tp < t.length())
        {
            if (s[sp] == t[tp])
            {
                sp++;
            }
            tp++;
        }
        return sp == s.length();
    }
};

int main()
{

    Solution solution;
    string s, t;
    s = "acb";    // sub
    t = "ahbgdc"; // total
    cout << solution.isSubsequence(s, t) << endl;

    return 0;
}