#include<iostream>
#include <bits/stdc++.h>

using namespace std; 

int removeDuplicate(vector<int> &nums){
    int j=0;
    for(int i =1; i <nums.size(); i++){ 
        if (nums[j]!= nums[i]){
            j++;
            nums[j]= nums[i];
            
        }
    }
    return j+1;
}

int main(){
     vector<int> nums= {2,2,3,4,4,4,5,6,6};

     int newLength = removeDuplicate(nums);


    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";  
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl; 

    return 0;
}