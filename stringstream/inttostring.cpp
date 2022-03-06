#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int b=4; 
    int c=5;
    int n=45;


    stringstream s;
    stringstream ni;
    ni<<n;
    string num = ni.str();
    s<<b;
    s<<c;
    string a = s.str(); 
    cout<<a<<endl;
    if(a==num){
        cout<<"yes"; 
    }
    else{
        cout<<"no";
    }
    
    return 0;
}