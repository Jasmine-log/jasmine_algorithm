//
//
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        map<char, int> var;

        for (int i = 0; i < magazine.length(); i++)
            var[magazine[i]]++;

        for (int i = 0; i < ransomNote.length(); i++)
        {
            if (var[ransomNote[i]] > 0)
                var[ransomNote[i]]--;
            else 
                return false;
        }
        return true;
    }
};

int main()
{

    Solution solution;
    cout << solution.canConstruct("fihjjjjei", "hjibagacbhadfaefdjaeaebgi") << endl;

    return 0;
}