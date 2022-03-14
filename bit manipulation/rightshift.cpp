#include<iostream>
using namespace std;
int main(){
    int n,i;
    do{
        cin>>n;
        cin>>i;
        cout<<n<<" "<<i<<"="<<(n>>i)<<endl;
    }while(i!=0);
    
    
    return 0;
}