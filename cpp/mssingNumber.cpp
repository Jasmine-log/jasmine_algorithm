#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        vector<bool> check(nums.size(), false);

        for (int i : nums)
        {
            check[i] = true;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!check[i])
            {
                return i;
            }
        }
        return nums.size();
    }
};
int main()
{

    Solution solution;
    vector<int> nums = {0, 1};
    cout << solution.missingNumber(nums) << endl;

    nums = {3, 0, 1};
    cout << solution.missingNumber(nums) << endl;

    nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << solution.missingNumber(nums) << endl;

    return 0;
}