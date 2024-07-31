#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {

        int ans = -1;
        int pointer = s.length() - 1;

        while (s.length() > pointer)
        {
            char temp = s[pointer];
            if (s[pointer] == ' ')
            {

                if (ans >= 0)
                {
                    return ans + 1;
                }
            }
            else
            {
                ans++;
            }
            pointer--;
        }
        return ans + 1;
    }
};

int main()
{

    Solution solution;
    string s;

    s = "Hello World"; // 5
    cout << solution.lengthOfLastWord(s) << endl;

    s = "   fly me   to   the moon  "; // 4
    cout << solution.lengthOfLastWord(s) << endl;

    s = "luffy is still joyboy";
    cout << solution.lengthOfLastWord(s) << endl;

    s= " ";
    cout << solution.lengthOfLastWord(s) << endl;

    s = "b a ";
    cout << solution.lengthOfLastWord(s) << endl;

    return 0;
}