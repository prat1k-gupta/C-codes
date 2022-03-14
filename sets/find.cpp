#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> st={1,2,3,4,5}; 
    auto it = st.find(1);
    if(it != st.end())
    cout<<"yes";
    else 
    cout<<"no";
    return 0;
}