#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int mn=1e9;
        for(int i=0; i<=n/2; i++){
          if(i==n/2){
            mn=abs(nums[i-1]-nums[i]);
            break;
          }
         mn= min(abs(nums[n-1-i]-nums[i]),mn);
        }
        return mn;
    }
};
int main(){
  vector<int>vc;
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    int c;
    cin>>c;
    vc.push_back(c);
  }
  Solution so;
  cout<<so.findValueOfPartition(vc);
  return 0;
}