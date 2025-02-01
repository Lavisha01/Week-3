#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int removeValue(vector<int>& nums, int val) {
        int j = 0; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[j] = nums[i]; 
                j++;
            }
        }
        return j; 
    }

int main(){
    vector<int> nums = {3, 2, 2, 3}; 
    int val = 2;
    // int val = 3;

    int newLength = removeValue(nums, val);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
     
    return 0;
}