// O(n*k) solution for finding maximum sum of
// a subarray of size k
#include <iostream>
#include <vector>
using namespace std;

int fixed_maxSum(vector<int> &arr, int n, int k)
{
    if (n <= k)
    {
        cout << "Invalid";
        return -1;
    }

    int max_sum = INT_MIN;

    for (int i = 0; i < n - k + 1; i++)
    {
        int current_sum = 0;
        for (int j = 0; j < k; j++)
            current_sum = current_sum + arr[i + j];

        max_sum = max(current_sum, max_sum);
    }
    return max_sum;
}

int variable_maxSum(vector<int> arr, int n, int k)
{
    if (n <= k)
    {
        cout << "Invalid";
        return -1;
    }

    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];

    int window_sum = max_sum;
    for (int i = k; i < n; i++)
    {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main()
{
    cout << "==================Fized Sliding Window==================" << endl;
    // case # 1
    vector<int> arr = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    int n = 9;
    cout << sizeof(arr) <<endl; // 24
    cout << sizeof(arr[0]) << endl; // 4

    cout << fixed_maxSum(arr, n, k) << endl; // 24

    // case # 2
    n = 4;
    k = 2;
    arr.resize(n,0);
    arr = {100, 200, 300, 400};
    cout << fixed_maxSum(arr, n, k) << endl; // 700

    // case # 3
    n = 2;
    k = 3;
    arr.resize(n,0);
    arr = {2, 3};
    cout << fixed_maxSum(arr, n, k) << endl; // 39

    cout << "==================Variable Sliding Window==================" << endl;

    n = 9;
    k = 4s;
    arr.resize(n,0);
    arr = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    cout << variable_maxSum(arr, n, k) << endl; // 24
    return 0;

    return 0;
}
