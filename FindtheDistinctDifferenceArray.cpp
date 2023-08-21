#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
       

 int has[50+1]={0};
int c=0,p=0,s=0,pre[n],suf[n];

for(int i=0; i<n;i++){
  if(has[nums[i]]!=1){
c=c+1;
pre[i]=c;
has[nums[i]]=1;
  }else{
    pre[i]=c;
  }
 }


int hasi[51]={0},c2=0;
suf[n-1]=0,hasi[suf[n-1]]=1;

for(int i=n-2; i>=0;i--){
  if(hasi[nums[i]]!=1){
c2=c2+1;
suf[i]=c2;
hasi[nums[i]]=1;
  }
  else if(hasi[nums[i]]==1 && hasi[nums[i+1]]==1){
    suf[i]=has[nums[i+1]]+1;
  }
  else{
    suf[i]=c2;
  }
}
for(int i=0; i<n; i++){
  cout<<suf[i]<<" ";
}
vector<int>vc;
for(int i=0; i<nums.size(); i++){
  vc.push_back(pre[i]-suf[i]);

}

//return vc;
    }

};
int main(){
  vector<int>vc{37,37,37,37,33};
  Solution ob;
 ob.distinctDifferenceArray(vc);
  
  return 0;
}