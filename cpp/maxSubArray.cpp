#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Iterative
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int globalMaxSum = nums[0], currMaxSum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            currMaxSum = max(currMaxSum + nums[i], nums[i]);
            globalMaxSum = max(globalMaxSum, currMaxSum);
        }
        return globalMaxSum;
    }
};

// Recursive
class Solution
{
public:
    int globalMaxSum;
    int maxSubArray(vector<int> &nums, int n)
    {
        if (n == 1)
            return nums[0];
        int currMaxSum = max(nums[n - 1], maxSubArray(nums, n - 1) + nums[n - 1]);
        globalMaxSum = max(globalMaxSum, currMaxSum);
        return currMaxSum;
    }
    int maxSubArray(vector<int> &nums)
    {
        globalMaxSum = nums[0];
        maxSubArray(nums, nums.size());
        return globalMaxSum;
    }
};

// Brute-force
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max_sum = nums[0];
        int n = nums.size();

        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                int current_sum = 0;
                for (int k = i; k <= j; ++k)
                {
                    current_sum += nums[k];
                }
                if (current_sum > max_sum)
                {
                    max_sum = current_sum;
                }
            }
        }
        return max_sum;
    }
};