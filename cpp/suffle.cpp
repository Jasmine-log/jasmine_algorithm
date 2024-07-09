#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    vector<int> origin;

public:
    Solution(vector<int> &nums) : origin(nums)
    {
        //origin = nums;
    }

    vector<int> reset()
    {
        return origin;
    }

    vector<int> shuffle1()
    {
        vector<int> shuffled = origin;
        int last = shuffled.size();
        for (int i = shuffled.size() - 1; i >= 0; i--)
        {
            int ptr = rand() % last;
            swap(shuffled[i], shuffled[ptr]);
            last--;
        }
        return shuffled;
    }
    
    vector<int> shuffle2()
    {
        vector<int> shuffled = origin;
        for (int i = shuffled.size() - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        swap(shuffled[i], shuffled[j]);
        }
    return shuffled;
    }
};