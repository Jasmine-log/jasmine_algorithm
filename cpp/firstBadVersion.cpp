//https://leetcode.com/problems/first-bad-version/description/s

#include <iostream>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 0;
        long long high = n;
        long long ans = 0;

        while (low <= high) {
            long long  mid = (high + low) / 2;
            if (isBadVersion(mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

