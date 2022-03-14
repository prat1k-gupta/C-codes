#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q,num,Q;
    string name; 
    string nam; 
    map<string,int> m;  
    cin>>q;
    auto itr = m.begin(); 
    while(q--){
        cin>>Q;
        switch(Q){
                case 1:
                    cin>>name>>num; 
                    itr = m.find(name);
                    if(itr->first==name){
                        itr->second+=num;  
                    }
                    m.insert(make_pair(name,num));
                    break; 
                case 2: 
                    cin>>nam;
                    itr = m.find(nam);
                    m.erase(itr->first);
                    break; 
                case 3: 
                    cin>>nam; 
                    itr = m.find(nam);
                    if(itr==m.end()){
                        itr->second=0; 
                    }
                    cout<<itr->second<<endl; 
                    break; 
            }
    }
    return 0;
}

