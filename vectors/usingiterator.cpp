#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(1); 
    vec.push_back(2);
    vec.push_back(3);
    vector<int> :: iterator it = vec.begin();  // 1
    // vector<int> :: reverse_iterator it = vec.rbegin();// 2
    // vector<int> :: const_iterator it= vec.cbegin();//1
    cout<< *(it) <<endl;  
    // while(it!=vec.end()){
    //     cout<<*it<<" ";
    //     it++; 
    // }  //output: 1 2 3
    return 0;
}