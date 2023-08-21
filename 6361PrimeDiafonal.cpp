#include <bits/stdc++.h>
using namespace std;

bool prime[1000005];
class Solution {
  private:
  void sieve(int N){
memset(prime,true,sizeof(prime));
        prime[0]=false;
        prime[1]=false;

        for(int i=2; i<=sqrt(N); i++){
          if(prime[i]==true){
for(int j=i*i; i<=N; j=j+i)
          prime[i]=false;
          }
        }
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int N=nums.size(),mx=INT_MIN;
        int fl=1;
        sieve(1000000);
        for(int i=0; i<N;i++){
          //fl &=(prime[nums[i][i]] && prime[nums[i][N-1-i]]);

          if((prime[nums[i][i]] && prime[nums[i][N-1-i]])){
            mx=max(mx,nums[i][i]);
          }
        }
return mx;
}
};
int main(){
  vector<vector<int>> nums{
    {1,2,3},
    {5,6,7},
    {9,10,11}
  };
 Solution ob;
  cout<<ob.diagonalPrime(nums);
  return 0;
}