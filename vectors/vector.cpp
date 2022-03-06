#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> arr; 
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        arr.push_back(i);
    }
    for (int i = 1; i < arr.size(); i++)
    {

        cout<<arr[i]<<" ";
    }
    
    return 0;
}