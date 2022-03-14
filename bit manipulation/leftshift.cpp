#include<iostream>
using namespace std;
int main(){
    int n; 

    int i;
      
    do{
        cin>>n;
        cin>>i;
        cout<<n<<" "<<i<<"="<<(n<<i)<<endl;
    }while(i!=0);
    
    return 0;
}