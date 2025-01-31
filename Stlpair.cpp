#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

int main(){
    pair<int ,string> p;
    // pair<double, float> f;

    // p =make_pair(2, "Abcs");
    // cout<< p.first<< "   " << p.second<< "   "<<endl;

    //also declared as
    p ={2, "dsz"};
    pair<int, string> &p1 = p;
    //referenced, at addr p1 value of p is copied.

    p1.first = 3;
    cout<< p1.first<< "   " << p1.second<< "   "<<endl;
// why pairs
    int a[]= {1,2,4};
    int b[]= {2,4,8};

    pair<int, int> p_array[3];
    p_array[0]= {1,2};
    p_array[1]= {2,4};
    p_array[2]={4,8};

    // for(int i=0; i<3; ++i){
    //     cout<< p_array[i].first<< "  "<< p_array[i].second<< "  "<< endl;
    //         }
    cin >> p.first;






    
    return 0;
}