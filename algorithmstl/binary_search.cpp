#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> ar = {1,2,3,7,5};
    //binary_search 
    //array must be sorted for this
    auto it= binary_search(ar.begin(),ar.end(),3);
    it ? cout<<"yes":cout<<"No";
    cout<<*it-ar.begin()<<endl; 
    return 0;
}