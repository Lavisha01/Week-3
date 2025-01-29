#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int check_missing(vector<int>& vec){
    long long int sum=0; //for VERY big values
    int missing;
    int n= vec.size();
    long long int m=n+1;
    for(int i=0; i<n; i++){
        sum += vec[i];
    }
   long long int total_sum = (m*(m+1))/2;
   cout<< sum <<endl<<total_sum;
    missing = total_sum - sum;
    return missing;
}
int main(){
    vector<int> vec = { 1,2,4,5,6,7,8};
    int missing = check_missing(vec);
    cout<<" missing element in array is: " << missing <<endl;
     
    return 0;
}