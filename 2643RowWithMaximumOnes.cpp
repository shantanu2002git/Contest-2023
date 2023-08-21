#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
       vector<int>v;
       int c=0,mx=INT_MIN,ix;
       int n=mat.size();
       int m=mat[0].size();
       for(int i=0; i<n; i++){
        c=0;
        for(int j=0; j<m; j++){
          if(mat[i][j]==1){
            c++;
          }
          if(c>mx){
            mx=c;ix=i;
          }
        }
       }
    
//cout<<ix<<" "<<mx<<endl;
v.push_back(ix);
v.push_back(mx);
return v;
    }
};
int main(){
  Solution ob;
  vector<vector<int>> mat{
    {1,0,0},
    {1,1,1},
    {1,1,1}
  };
  ob.rowAndMaximumOnes(mat);
  
  return 0;
}