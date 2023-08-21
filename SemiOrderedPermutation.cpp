#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
      int n=nums.size(),c1,c2;
       for(int i=0; i<n; i++){
      if(nums[i]==1)
      {
        c1=i;
      }
      else if(nums[i]==n){
        c2=i;
      }
       }
int k;

       if(c1<c2){
       k=c1+(n-1-c2);
       
       }else{
        
        k=((c1+(n-1-c2))-1);
       }
      
       return k;
    }
};

int main(){
  vector<int>vc{2,1,4,3};//{2,4,1,3};//{1,3,4,2,5};//{2,4,1,3};
  Solution so;
  cout<<so.semiOrderedPermutation(vc); //
  return 0;
}