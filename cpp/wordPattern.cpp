#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution
{
private:
    int findWhitespace(string s, int pointer)
    {

        for (int i = pointer; i <= s.length(); i++)
        {
            // 정상 종료인지 아닌지 정확하지 않음
            // find 류의 함수는 탐색이 끝나면 -1을 return
            if (s[i] == ' ' || s[i] == '\0')
                return i;
        }
        return -1;
    }

    string makeWord(string s, int start, int end)
    {
        string temp = "";
        for (int i = start; i < end; i++)
            temp += s[i];
        return temp;
    }

    bool tempExist(string temp, map<char, string> map)
    {
        for (auto word : map)
        {
            if (word.second.compare(temp) == 0 && word.second != "")
            {
                return true;
            }
        }
        return false;
    }

    // 문제를 더 작게 쪼갠다, split ==> 1 method ==> 1task ==> error logic detection & code level getting easy
    // 작은 문제는 더 잘 풀 수 있다

public:
    bool wordPattern(string pattern, string s)
    {
        map<char, string> map;
        int start = 0, end = 0;

        for (int i = 0; i < pattern.length(); i++)
        { // pattern

            end = findWhitespace(s, start);

            if (end == -1)
            { // pattern이 word보다 많을 때(word가 먼저 소진됨)
                return false;
            }

            string temp = makeWord(s, start, end);

            if (map[pattern[i]] == "") // a="", b="cat", a="cat"
            {
                if (tempExist(temp, map))
                    return false;
                map[pattern[i]] = temp;
            }
            else
            {
                if (map[pattern[i]] != temp) // a="dog", a="cat"
                {
                    return false;
                }
            }
            start = end + 1;
        }

        if (end < s.length())
            return false;
        else
            return true;
    };

    int main()
    {
        Solution solution;
        string pattern, s;
        /*
            // pattern = "abba", s = "dog cat cat dog";
            // cout << solution.wordPattern(pattern, s) << endl;

            // pattern = "aaaa", s = "dog cat cat dog";
            // cout << solution.wordPattern(pattern, s) << endl;

            // pattern = "abba", s = "dog dog dog dog";
            // cout << solution.wordPattern(pattern, s) << endl;

            // pattern = "aaa", s = "aa aa aa aa";
            // cout << solution.wordPattern(pattern, s) << endl;

            //pattern = "jquery", s = "j q u e r y";
            //cout << solution.wordPattern(pattern, s) << endl;

            //pattern = "he", s="query"
            //cout << solution.wordPattern(pattern, s) << endl;
        */
        return 0;
    }