#include<iostream>
using namespace std;
int main(){
    int n;
    int rev = 0;
    cout<<"enter a number: ";
    cin>>n;
    while(n!=0){
        int r = n%10;
        n = n/10;
        rev = ( rev * 10 )+r;
    }
    cout<<"the reversed number is : "<< rev;
}