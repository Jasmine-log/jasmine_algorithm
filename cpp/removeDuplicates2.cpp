#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int limit = 1;
        int idx = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                limit++;
            }
            else
            {
                limit = 1;
            }
            if (limit <= 2)
            {
                nums[idx] = nums[i];
                idx++;
            }
        }
        return idx;
    }
};

int main()
{

    Solution solution;
    vector<int> nums;

    // nums={1,1,1,2,2,3};
    // solution.removeDuplicates(nums);
    nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    solution.removeDuplicates(nums);

    cout << "done" << endl;

    return 0;
}