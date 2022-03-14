#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> ar = {1,2,3,4,5};
    //upper_bound search: to find the element strictly greater then the value to find
    auto it = upper_bound(ar.begin(),ar.end(),2S);
    cout<<it-ar.begin()<<endl; 


    // //checking for element not present in the array 
    // vector<int> ar ={1,4,7,8,10};
    // vector<int> :: iterator it = upper_bound(ar.begin(),ar.end(),5);
    // cout<<it-ar.begin()<<endl;  
    // return 0;
}