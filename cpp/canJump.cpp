#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums){
        return jump(0, nums);
    }

    bool jump(int idx, vector<int>& nums){
        if(nums.size()-1==idx) 
            return true;

        int goal=idx+nums[idx];
        
        for(int i=idx+1;i<=goal;i++){
            if(jump(i, nums))
                return true;
        }
        return false;
    }

    bool canJump2(vector<int>& nums){
        int goal=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(i+nums[i]>=goal){
                goal=i;
            }
        }
        return goal == 0;
    }
};

int main(){

    Solution solution;
    vector<int> nums;

    nums={2,3,1,1,4};
    cout<<solution.canJump(nums);

    return 0;
}