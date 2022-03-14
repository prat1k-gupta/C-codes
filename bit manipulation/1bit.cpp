#include<iostream>
using namespace std;
int main(){
    int n=12,count=0; 
    while(n!=0){
        if(n&1 == 1){
            count++; 
        }
        n=n>>1; 
    }
    cout<< count; 
    return 0;
}