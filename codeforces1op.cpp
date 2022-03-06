#include <iostream>
using namespace std;

int main() {
	int n,t,s,ans[10];
    cin>>n; 
    while(n!=0){
        cin>>t>>s;
        int count=0;
        for (int i = 0; i <t; i++)
        {
            for (int j = 1; j <= s; j++)
            {
                if(i+j==s){
                    count = count + 1;
                }            
            }
        }
        cout<<count<<endl;
        n--;
        
    }
	return 0;
}
