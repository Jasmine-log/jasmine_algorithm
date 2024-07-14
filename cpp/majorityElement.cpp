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
};

int main(){
    Solution solution;
    vector<int> nums;

    nums={3,2,3}; // 3
    cout << solution.majorityElement(nums) << endl;

    nums={2,2,1,1,1,2,2}; // 2

    return 0;
}