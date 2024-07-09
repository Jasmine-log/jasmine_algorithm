#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxSumbArray(vector<int> &nums)
    {

        int n = nums.size();
        int curr_sum = 0;
        int maxSum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            curr_sum += nums[i];
            maxSum = max(max, curr_sum);
            if (curr_sum < 0)
            {
                curr_sum = 0;
            }
        }
        return maxSum;
        
    }
};