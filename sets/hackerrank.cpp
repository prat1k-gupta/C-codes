#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> st; 
    int q,y,x; 
    while(q--){
        cin>>y>>x; 
        switch(y){
            case 1: 
                st.insert(x);
                break; 
            case 2: 
                st.erase(x);
                break; 
            case 3: 
                auto it = st.find(x);
                for(int elem : st){
                    if(*it == elem){
                        cout<<"Yes";
                        break; 
                    }
                }
                break; 
        }
    }   
    return 0;
}



