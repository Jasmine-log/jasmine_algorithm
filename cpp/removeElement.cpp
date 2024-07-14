#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int> &nums, int val)
    {
        int idx=0;
        for (int i = 0; i < nums.size() ; i++)
        {
            if(nums[i]!=val) {
                nums[idx]=nums[i];
                idx++;
            }
        }
        return idx;
    }
};

void print(vector<int> &nums){
    for(int i :nums){
        cout << i << endl;
    }
}

int main()
{
    Solution solution;
    vector<int> nums;
    int val; 

    nums = {3, 2, 2, 3};
    val = 3;
    solution.removeElement(nums, val);

    nums = {0,1,2,2,3,0,4,2};
    val = 2;
    solution.removeElement(nums, val);

    return 0;
}