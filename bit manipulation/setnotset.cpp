#include<iostream>
using namespace std;
int main(){
    int n,i, f=1; 
    cin>>n>>i;
    f=f<<i;
    if((n&f)==f){
        cout<< "set";
    }
    else{
        cout<<"not set";
    }
    
    return 0;
}