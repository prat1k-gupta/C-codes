#include<iostream>
using namespace std;
void pint(int n);
int main(){
    int n; 
    cin>>n; 
    pint(n);
    return 0;
}
// void pint(int n){
//     if(n==1){
//         cout<<n<<endl; 
//         return ;
//     }
//     pint(n-1);
//     cout<<n<<endl;
// }

void pint(int n){
    if(n==1){
        cout<<n<<endl; 
        return;
    }
    cout<<n<<endl;
    pint(n-1);
}