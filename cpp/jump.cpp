#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int step = 0, start = 0, end = 0;
        while (end < nums.size() - 1)
        {
            step++;
            int maxRange = end + 1;
            for (int i = start; i < end; i++)
            {
                if (i + nums[i] >= nums.size() - 1)
                    return step;
                maxRange = max(maxRange, i + nums[i]);
            }
            start = end + 1;
            end = maxRange;
        }
        return step;
    }
};

int main()
{

    Solution solution;
    vector<int> nums;

    nums = {2, 3, 1, 1, 4}; // 2
    cout << solution.jump(nums);

    nums = {2, 3, 0, 1, 4}; // 2
    cout << solution.jump(nums);

    return 0;
}