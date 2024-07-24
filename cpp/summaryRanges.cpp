#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
private:
    string convert(const vector<int> &nums, const int lp, const int rp){
        if(lp == rp - 1)
        {    
            return to_string(nums[lp]);
        }
        else
        {
            return to_string(nums[lp]) + "->" + to_string(nums[rp - 1]);
        }
    }

public:
    vector<string> summaryRanges2(vector<int> &nums)
    {
        // fiding continuous number
        int lp = 0, rp = 1;
        vector<string> ans;
        
        if (nums.size() == 0){
            return ans;
        }

        while (true)
        {   //base case
            if (rp >= nums.size())
            {
                ans.push_back(convert(nums, lp, rp));
                return ans;
            }
            //continuous
            if (nums[rp - 1] + 1 == nums[rp])
            {
                rp++;
            }
            // or not
            else
            { // or not // else문에서 계속 반복되다가 oveflow 발생
                ans.push_back(convert(nums, lp, rp));
                lp = rp;
                rp++;
            }
        }
    }
    
    vector<string> summaryRanges(vector<int> &nums)
    {
        // fiding continuous number
        int lp = 0, rp = 1;
        vector<string> ans;
        if (nums.size() == 1)
        {
            ans.push_back(to_string(nums[0]));
            return ans;
        }

        while (true)
        { // continuous
            if (nums[rp - 1] + 1 == nums[rp] || lp == rp)
            {
                rp++;

                if (rp == nums.size())
                {
                    string temp = (lp == rp - 1) ? to_string(nums[lp]) : to_string(nums[lp]) + "->" + to_string(nums[rp - 1]);
                    ans.push_back(temp);
                    return ans;
                }
            }
            else
            { // or not
                string temp = (lp == rp - 1) ? to_string(nums[lp]) : to_string(nums[lp]) + "->" + to_string(nums[rp - 1]);
                ans.push_back(temp);
                lp = rp;
            }
        }
    }
    
};
int main()
{
    Solution solution;
    vector<int> nums;

    nums = {0, 1, 2, 4, 5, 7};
    solution.summaryRanges(nums);

    nums = {0, 2, 3, 4, 6, 8, 9};
    solution.summaryRanges(nums);

    nums = {-1};
    solution.summaryRanges(nums);

    return 0;
}