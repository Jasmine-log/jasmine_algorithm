#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> answer;
        string fizz = "Fizz";
        string buzz = "Buzz";

        for (int i = 0; i < n; i++)
        {
            if (n % 3 == 0)
            {
                answer.push_back(fizz);
            }
            else if (n % 5 == 0)
            {
                answer.push_back(buzz);
            }
            else if (n % 3 == 0 && n % 5 == 0)
            {
                answer.push_back(fizz + buzz);
            }
            answer.push_back(to_string(i));
        }

        return answer;
    }
};
