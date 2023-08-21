/*https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-96/problems/#*/

class Solution {
  public:
  int mod=1e9;
    long long maximumSum(int n, vector<int> &A) {
        // code here
        long long int s=0;
        sort(A.begin(),A.end());
        for(int i=0; i<n; i++){
            s+=((long long)(i+1)*A[i]);
        }
        return s;
    }
};