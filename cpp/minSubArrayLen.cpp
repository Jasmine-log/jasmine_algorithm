#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums) 
    {
        int i = 0;
        int j = 0;
        int sum = 0;
        int minimum = INT_MAX;

        while (j < nums.size())
        {
            sum += nums[j];
            while (sum >= target)
            {
                sum -= nums[i];
                minimum = min(j - i + 1, minimum);
                i++;
            }
            j++;
        }
        if (minimum == INT_MAX)
        {
            return 0;
        }
        return minimum;
    }
};

int main()
{
    Solution solution;

    int target = 7;
    vector<int> nums = {2, 3, 1, 2, 4, 3}; // 2

    cout << solution.minSubArrayLen(target, nums) << endl;

    target = 4;
    nums = {1, 4, 4}; // 1
    cout << solution.minSubArrayLen(target, nums) << endl;

    target = 11;
    nums = {1, 1, 1, 1, 1, 1, 1, 1}; // 0
    cout << solution.minSubArrayLen(target, nums) << endl;

    return 0;
}