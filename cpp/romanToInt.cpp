#include <iostream>
#include <map>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> m{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        // m.insert(make_pair('D', 500));
        // m['M']= 1000;
        unsigned int result = 0;

        // case 1
        if (s.length() == 1)
        {
            return m[s[0]];
        }
        int i = 1;
        while (i < s.length())
        {
            int prev = m[s[i - 1]];
            int cur = m[s[i]];
            if (prev >= cur)
            {
                result += prev;

                if (i == s.length() - 1)
                    result += cur;
                i++;
            }
            else
            {
                result += (cur - prev);

                if (i == s.length() - 2)
                {
                    result += m[s[i + 1]];
                    break;
                }
                else
                    i += 2;
            }
        }

        return result;
    }
};

int main()
{

    Solution solution;

    cout << solution.romanToInt("III") << endl;
    cout << solution.romanToInt("LVIII") << endl;
    cout << solution.romanToInt("MCMXCIV") << endl;
    cout << solution.romanToInt("DCXXI") << endl;
    cout << solution.romanToInt("MDCXCV") << endl;
    return 0;
}