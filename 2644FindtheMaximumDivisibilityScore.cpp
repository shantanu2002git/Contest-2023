#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int x = 0, y = 0,ans = INT_MAX;
        for(auto &i: divisors){
            x = 0;
            for(auto &j: nums){
                if(j%i==0){
                    x++;
                }
            }
            if(x>y){
                y = x;
                ans = i;
            }
            if(x==y){
                ans = min(ans,i);
            }
        }
        cout<<ans;
        return ans;
    }
};
int main(){
  Solution ob;
  vector<int>num{31,91,47,6,37,62,72,42,85};
  vector<int>divs{95,10,8,43,21,63,26,45,23,69,16,99,92,5,97,69,33,44,8};
  ob.maxDivScore(num,divs);
  return 0;
}