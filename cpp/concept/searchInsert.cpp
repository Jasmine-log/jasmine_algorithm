#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        int mid;

        while (left <= right)
        {
            mid = (left + right) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return right + 1;
    }
};

int main()
{
    Solution solution;
    vector<int> nums;
    int target;

    nums = {1, 3, 5, 6};
    target = 5;
    cout << solution.searchInsert(nums, target) << endl; // target exist

    nums = {1, 3, 5, 6};
    target = 2;
    cout << solution.searchInsert(nums, target) << endl; // no target

    nums = {1, 3, 5, 6};
    target = 7;
    cout << solution.searchInsert(nums, target) << endl; // no target

    return 0;
}