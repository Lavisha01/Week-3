#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) return mid;  // Target found
        else if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    
    return left;  // Position where target should be inserted
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target;
    cin >> target; // Input target

    cout << "Insert position: " << searchInsert(nums, target) << "\n";

    return 0;
}
