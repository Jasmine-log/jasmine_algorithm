// https://leetcode.com/problems/merge-sorted-array/description/
#include <iostream>
#include <algorithm> // sor sort
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

		int i = m - 1;
		int j = n - 1;
		int k = m + n - 1;

		while (j >= 0) {
			if (i >= 0 && nums1[i] > nums2[j]) {
				nums1[k--] = nums1[i--];
			}
			else {
				nums1[k--] = nums2[j--];
			}
		}
    }
	
	void merge2(vector<int>& nums1, int m, vector<int>& nums2, int n) {

		for (int i = m, j = 0; j < n; j++) {
			nums1[i] = nums2[j];
			i++;
		}
		sort(nums1.begin(), nums1.end()); // sort(first, last)
	}
};
int main() {

	vector<int> nums1 = { 1, 2, 3, 0, 0, 0 };
	int m = 3;

	vector<int> nums2 = {2, 5, 6 };
	int n = 3;

	vector<int> expected = { 1, 2, 2, 3, 5, 6 };

	Solution solution;
	solution.merge(nums1, m, nums2, n);


	cout << "done" << endl;

    return 0;
}
