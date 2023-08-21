#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& q) {
        unordered_set<int>row,col;
        int nrow=n,ncol=n;
        long long int s=0;
        for(int i=q.size()-1; i>=0; i--){
          int tp=q[i][0],id=q[i][1],vl=q[i][2];

          if(tp==0 && row.find(id)==row.end()){
              s=s+(ncol*vl);
              row.insert(id);
              nrow--;
          }
          else if(tp==1 && col.find(id)==col.end()){
              s=s+(nrow*vl);
              col.insert(id);
              ncol--;
          }
        }
        return s;
    }
};

int main(){
    Solution so;
    vector<vector<int>>mtc{{1,1,1},{1,0,7},{0,0,0}};
    int n=2;
   cout<< so.matrixSumQueries(n,mtc);
    return 0;
}

/*
2
[[1,1,1],[1,0,7],[0,0,0]]  ans=8


*/