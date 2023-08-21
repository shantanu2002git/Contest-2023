#include <bits/stdc++.h>
using namespace std;



class Solution {
  private:
  int mx=-1,ttk=0,ntt=0;
  int cal(int ix, int pv, vector<int>nums, int target, vector<int>dp){
    if(ix==0){
      return 0;
    }
int li=nums[pv]-nums[ix];

if(-target<=li && li<=target){
  return 1;
}
     ttk=ttk+cal(ix-1, ix,nums,target,dp);
     
     ntt=0+cal(ix-1,ix, nums, target, dp);
   
    //mx=max(mx,ttk+ntt);
    return max(ttk,ntt);
  }
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> dp(n,0);
        int pv=n-1;
      
 return cal(n-2,pv,nums,target,dp);


    }
};

/*
class Solution {
public:
    
    int find(int ind,vector<int>&nums,int tar,vector<int>&dp)
    {
        if(ind==nums.size()-1)
        {
            return 0;
        }
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        int ans=INT_MIN;
        
        for(int i=ind+1;i<nums.size();i++)
        {
            if(abs(nums[i]-nums[ind])<=tar)
            {
                ans=max(ans,1+find(i,nums,tar,dp));
            }
        }
        return dp[ind]=ans;
    }

    int maximumJumps(vector<int>& nums, int tar)
    {
        vector<int>dp(nums.size(),-1);
        int ans=find(0,nums,tar,dp);
       if(ans>0)
           return ans;
        else
            return -1;
    }
};
*/
int main(){
  vector<int>vc{1,3,6,4,1,2};
  int t=1;
  Solution so;
  cout<<so.maximumJumps(vc, t);
  return 0;
}