#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int n ) {
        
        for(int i =0;i<n-1;i++){
            int j = n-1;
           // cout<<nums[i];
            while(i<j){
                //cout<<nums[j]<<'\n';
                if(nums[i]>nums[j]){
                    int temp = nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
                j--;
            }
            cout<<nums[i]<<'\n';
        }
    /*  for(auto it:nums){
            cout<<it<<" ";
        }*/
    }
int main(){
    vector<int >nums;
    nums = {0,2,12,3,0};
    int n  =  nums.size();

    funcc(nums,n);



return 8;
}