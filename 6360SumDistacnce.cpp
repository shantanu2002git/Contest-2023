#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void distance(vector<int>& nums) {
      map<int,int>mp;
      vector<pair<int,int> >vp;
      vector<long long>vl;
int n=nums.size();
      for(int i=0; i<n; i++){
        mp[nums[i]]++;
      }

      for(int i=0; i<nums.size(); i++){
        if(mp[nums[i]]<=1){
          nums[i]=0;
        }
      }
      for(int i=0; i<nums.size(); i++){
        //cout<<nums[i]<<" ";
      }
      for(int i=0; i<nums.size(); i++){
        if(mp[nums[i]]>1){
          vp.push_back({nums[i],i});
        }
      }
      for(int i=0; i<vp.size(); i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
      }
      cout<<endl;
      int s=0;

      for(int i=0; i<nums.size(); i++){
        if(mp[nums[i]]>1){
       for(int j=0; j<vp.size(); j++){
        if(i!=vp[j].second)
               cout<<vp[j].second<<" ";
       }
      }
        
        
      }
      cout<<endl;
      for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
      }
}
};
int main(){
  Solution ob;
  vector<int>nums{1,3,1,1,2};
  ob.distance(nums);
  return 0;
}