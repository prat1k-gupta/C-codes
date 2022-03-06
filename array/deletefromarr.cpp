#include<iostream>
#include<vector> 
using namespace std;
//with call by value 
// int delte(vector<int>& a, int num, int n);
// int main(){
//     int n, num; 
//     vector<int> a= {1,2,3,3,4};
//     n= a.size();
//     cin>>num; 
//     n=delte(a,num,n);
//     for(int i = 0; i < n ; i++)
//     {
//         cout<<a[i]<<" ";
//     }
    
// }
// void delte(vector<int>& a, int num,int n){
//     n=n-1;
//     for(int i = num-1; i < n; i++)
//     {
//         a[i]=a[i+1];
//     }
//    return n;  
// }

//with call by refrence 
void delte(vector<int>& a, int num, int *n);
int main(){
    int n, num; 
    vector<int> a= {1,2,3,3,4};
    n= a.size();
    cin>>num; 
    delte(a,num,&n);
    for(int i = 0; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
void delte(vector<int>& a, int num,int *n){
    *n=*n-1;
    for(int i = num-1; i < *n; i++)
    {
        a[i]=a[i+1];
    }  
}
