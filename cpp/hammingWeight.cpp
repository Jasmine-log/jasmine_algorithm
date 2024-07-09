#include <iostream>
using namespace std;

class Solution
{
public:
    int hammingWeight(int n)
    {
        int cnt = 0;
        while (n >= 1)
        {
            cnt = (n % 2 == 1) ? cnt+1 : cnt;
            n /= 2;
        }
        return cnt;
    }
};

int main()
{
    Solution solution;

    cout << solution.hammingWeight(11) << endl; // 3
    cout << solution.hammingWeight(128) << endl;       // 1
    cout << solution.hammingWeight(2147483645) << endl; // 30

    return 0;
}