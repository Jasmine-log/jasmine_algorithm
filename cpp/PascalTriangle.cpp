#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> pascalTriangle(numRows);

        for (int i = 0; i < numRows; i++)
        {
            pascalTriangle[i].resize(i+1, 1);
            for (int j = 1; j < i; j++)
            {
                //C(n, k) = C(n-1, k-1) + C(n-1, k)
                pascalTriangle[i][j]=pascalTriangle[i-1][j-1]+pascalTriangle[i-1][j];
            }
        }
        return pascalTriangle;
    }
};

int main()
{

    Solution solution;

    //cout << solution.generate(5) << endl;
    solution.generate(5);

    return 0;
}