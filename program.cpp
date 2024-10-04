#include<iostream>
#include<vector>
using namespace std;



//brute force

vector<int> pairSum(vector<int> nums,int target){
    int n=nums.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
       
       for(int j=i+1;j<n;j++){
         
           if(nums[i]+nums[j]==target){
             
             ans.push_back(i);
             ans.push_back(j);
             return ans;

           }


       }

       return ans;


    }






}








int main(){
       
       vector<int> list={5,3,6,4,7};
       int target=8;

       
       vector<int> ans=pairSum(list,target);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<",";
        }



    return 0;
}