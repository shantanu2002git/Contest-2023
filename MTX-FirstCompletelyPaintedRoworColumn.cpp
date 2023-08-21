
/*
You are given a 0-indexed integer array arr, and an m x n integer matrix mat. arr and mat both contain all the integers in the range [1, m * n].

Go through each index i in arr starting from index 0 and paint the cell in mat containing the integer arr[i].

Return the smallest index i at which either a row or a column will be completely painted in mat.

 

Example 1:

image explanation for example 1
Input: arr = [1,3,4,2], mat = [[1,4],[2,3]]
Output: 2
Explanation: The moves are shown in order, and both the first row and second column of the matrix become fully painted at arr[2].
Example 2:

image explanation for example 2
Input: arr = [2,8,7,4,1,3,5,6,9], mat = [[3,2,5],[1,4,6],[8,7,9]]
Output: 3
Explanation: The second column becomes fully painted at arr[3].
 

Constraints:

m == mat.length
n = mat[i].length
arr.length == m * n
1 <= m, n <= 105
1 <= m * n <= 105
1 <= arr[i], mat[r][c] <= m * n
All the integers of arr are unique.
All the integers of mat are unique.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        unordered_map<int,pair<int,int>>mp;
        vector<int>row(n,0),col(m,0);
       
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[mat[i][j]]={i,j};
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            pair<int,int>ind=mp[arr[i]];
            row[ind.first]++;
            col[ind.second]++;
            if(row[ind.first]==mat[0].size() || col[ind.second]==mat.size())return i;
        }
        return -1;
    }
};
int main(){
  /*Input: arr = [2,8,7,4,1,3,5,6,9], mat = [[3,2,5],[1,4,6],[8,7,9]]
Output: 3
Explanation: The second column becomes fully painted at arr[3].*/

vector<vector<int>>vc2
/*{
  {1,4},
  {2,3}
};*/
/*{
  {3,2,5},
  {1,4,6},
  {8,7,9}
};*/

{
  {4,3,5},
  {1,2,6}
};

vector<int>vc1{1,4,5,2,6,3};//{2,8,7,4,1,3,5,6,9};/* vc1{1,3,4,2};*/
Solution ob;
cout<<ob.firstCompleteIndex(vc1,vc2);
  return 0;
}