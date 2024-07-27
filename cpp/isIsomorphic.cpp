#include <iostream>
#include <string>
#include <map>
using namespace std;

// isomorphic ? corresponding or similar in form and relations && 1:1 realationships

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> m; // map
        map<char, bool> v; // visit

        for (int i = 0; i < s.length(); i++)
        {
            if (!m[s[i]])
            {
                m[s[i]] = t[i]; // s[i]'s pair is t[i]
                if (v[t[i]] != true)
                    v[t[i]] = true; // 1:1 pair
                else
                    return false;
            }
            else
            { 
                if (m[s[i]] != t[i])
                    return false;
            }
        }
        return true;
    }
};

int main()
{

    Solution solution;
    string s, t;

    s = "egg";
    t = "add";
    cout << solution.isIsomorphic(s, t) << endl; // 1

    s = "foo";
    t = "bar";
    cout << solution.isIsomorphic(s, t) << endl; // 0

    s = "paper";
    t = "title";
    cout << solution.isIsomorphic(s, t) << endl; // 1

    s = "badc";
    t = "baba";
    cout << solution.isIsomorphic(s, t) << endl; // 0

    return 0;
}