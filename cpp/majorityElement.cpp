#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
    
    // Moore voting
    int majorityElement2(vector<int>& nums) {
        int count = 0;
        int major = 0;

        for (int num : nums) {
            if (count == 0) major = num;
            if (major == num) count++;
            else count--;
        }
    return major;
    }
};

int main(){
    Solution solution;
    vector<int> nums;

    nums={3,2,3}; // 3
    cout << solution.majorityElement(nums) << endl;

    nums={2,2,1,1,1,2,2}; // 2
    cout << solution.majorityElement(nums) << endl;


    return 0;
}