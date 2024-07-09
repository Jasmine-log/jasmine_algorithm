#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfThree(int n)
    {

        if (n <= 0)
            return false;

        int cur = 1;

        while (cur <= n)
        {
            if (n % cur == 0 && cur == n)
                return true;
            cur = cur * 3;
        }
        // cur>n
        return false;
    }
};

int main()
{

    Solution solution;
    int n = 45;
    solution.isPowerOfThree(n);

    return 0;
}