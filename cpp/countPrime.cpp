#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int countPrimes(int n)
    {
        // Sieve Of Eratothons
        // idx : 0 to n

        if (n == 0 || n == 1)
            return 0;
        vector<bool> nums(n + 1, true);
        for (int i = 2; i <= n; i++) //2*2=4, 3*3, 4*4, .... 다음 수 찾기
        {
            if (nums[i])
            {
                for (int j = i + i; j <= n; j += i) // j=2*2=4, 4+2=6, 6+2=8...배수 지우기 
                {
                    nums[j] = false;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (nums[i])
            {
                count++;
            }
        }
        return count;
    }
};