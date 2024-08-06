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

class Solution
{
public:

    bool isoverlap(nums, lp, rp){
        vector<int> ascii(0,27);
        for(i=lp to rp){
            ascii[nums[i]-97]++;
        }
        for(ascii[i]>=1){
            return true;
        }
        return false;
    }
    int lengthOfLongestSubstring(string s)
    {
        int lp = 0;
        int maxLength = 0;
        unordered_set<char> charSet;

        lp, rp=0;
        while(int lp<s.len){
            if(isoverlap){
                lp++;
            }
            else{//!isopverlap
                rp++;
            }
        }

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