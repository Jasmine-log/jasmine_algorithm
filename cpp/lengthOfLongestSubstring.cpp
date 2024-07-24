/*
https://leetcode.com/problems/longest-substring-without-repeating-characters/?envType=study-plan-v2&envId=top-interview-150
*/
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int lp = 0;
        int maxLength = 0;
        unordered_set<char> charSet;

        for (int rp = 0; rp < s.length(); rp++)
        {
            while (charSet.find(s[rp]) != charSet.end())
            {
                charSet.erase(s[lp]);
                lp++;
            }

            charSet.insert(s[rp]);
            maxLength = max(maxLength, rp - lp + 1);
        }

        return maxLength;
    }
};
int main()
{

    Solution solution;
    string s;

    s = "abcabcbb"; // 3
    cout << solution.lengthOfLongestSubstring(s) << endl;

    s = "bbbbb"; // 1
    cout << solution.lengthOfLongestSubstring(s) << endl;

    s = "pwwkew"; // 3
    cout << solution.lengthOfLongestSubstring(s) << endl;

    return 0;
}