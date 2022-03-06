#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={-1,1,0,-3,3};
    int mul;
        vector<int> result(100);
        for(int i=0;i<nums.size();i++){
            int mul=1;
            for(int j=0;j<nums.size();j++){
                    nums[i]==nums[j]?j++:j+=0;
                    if(j>=nums.size()){
                        break;
                    }
                    else
                    mul = mul * nums[j];                
            }
            result[i]=mul;
        }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
    return 0;
}
        