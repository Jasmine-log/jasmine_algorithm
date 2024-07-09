#include <iostream>
using namespace std;

class Solution
{
public:
    int hammingDistance(int x, int y)
    {

        if (x == y)
            return 0;

        if (x < y)
        {
            int temp = 0;
            temp = x;
            x = y;
            y = temp;
        }

        int cnt = 0;

        while (y >= 1)
        {
            if ((y % 2) != (x % 2))
            {
                cnt++;
            }
            y /= 2;
            x /= 2;
        }
        while (x >= 1)
        {
            cnt = (x % 2 == 1) ? cnt + 1 : cnt;
            x /= 2;
        }
        return cnt;
    }
};

int main()
{

    Solution solution;

    cout << solution.hammingDistance(0, 0) << endl;       // 2
    cout << solution.hammingDistance(1, 4) << endl;       // 2
    cout << solution.hammingDistance(3, 1) << endl;       // 1
    cout << solution.hammingDistance(5, 9) << endl;       // 2
    cout << solution.hammingDistance(5, 2930285) << endl; // 11

    return 0;
}