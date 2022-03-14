#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    // vector<int> ar ={1,4,7,8,10};
    // vector<int> :: iterator it = lower_bound(ar.begin(),ar.end(),4);
    // cout<<it-ar.begin()<<endl; 
    // prints 1 the position of 4

    //checking for element not present in the array 
    vector<int> ar ={1,4,7,8,10};
    vector<int> :: iterator it = lower_bound(ar.begin(),ar.end(),5);
    cout<<it-ar.begin()<<endl;  
    return 0;
}