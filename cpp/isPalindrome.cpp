#include <iostream>
#include <vector>
using namespace std;

class Solution
{

private:
    vector<int> digits(int x)
    {
        vector<int> nums;

        for (int i = 10; x > 0; i)
        {
            nums.push_back(x % i);
            x /= 10;
        }
        return nums;
    }

public:
    bool isPalindrome(int x)
    {

        if (x < 0)
            return false;

        vector<int> nums = digits(x);

        for (int i = 0; i < (nums.size() / 2); i++)
        {
            if (nums[i] != nums[nums.size() - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{

    Solution solution;
    int x;

    x = 121;
    cout << solution.isPalindrome(x) << endl;

    x = -121;
    cout << solution.isPalindrome(x) << endl;

    x = 10;
    cout << solution.isPalindrome(x) << endl;

    x = 2147483647;
    cout << solution.isPalindrome(x) << endl;
    return 0;
}