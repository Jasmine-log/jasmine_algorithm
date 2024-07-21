#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        sort(citations.begin(), citations.end());
        int maximum = 0;
        int size = citations.size();
        for (int i = 0; i < size; i++)
        {
            if (citations[i] >= size - i)
            {
                //max(int, int) possible
                maximum = max(maximum, size - i);
            }
        }
        return maximum;
    }
};

int main()
{

    Solution solution;

    vector<int> citations;
    citations = {3, 0, 6, 1, 5};

    cout << solution.hIndex(citations) << endl;

    return 0;
}