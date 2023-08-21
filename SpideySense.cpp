/*
O represents an open space.
B represents a bomb.
W represents a wall.





Input:
3 3
O O O
W B B
W O O

Output:
 2 1 1 
-1 0 0 
-1 1 1

Explanation:
The walls at (1,0) and (2,0) are replaced by -1.
The bombs at (1,1) and (1,2) are replaced by 0.
The impact zone for the bomb at (1,1) includes open spaces at index (0,0), (0,1) and (2,1) with distance from bomb calculated as 2,1,1 respectively.
The impact zone for the bomb at (1,2) includes open spaces at index (0,3) and (2,2) with distance from bomb calculated as 1,1 respectively.




Input:
3 3
B W B
W O W
B W B

Output:
0 -1 0
-1 -1 -1
0 -1 0

Explanation:
There is no possible path from the open space to any of the bombs.
*/





int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

class Solution {
    private:
    bool safe(int x,int y, int n, int m){
        if(x<0 || y<0 || x>=n || y>=m) return 0;
        
    return 1; 
    }
  public:
    vector<vector<int>> shortestDistanceFromTheBomb(vector<vector<char>> &b, int n, int m) {
       vector<vector<int>>d(n,vector<int>(m,1e9));
       queue<pair<int,int>>q;
       for(int i=0; i<n;i++){
           for(int j=0; j<m;j++){
               if(b[i][j]=='B'){
                   q.push({i,j});
                   d[i][j]=0;
                   
               }
           }
       }
       while(!q.empty()){
          int x=q.front().first;
          int y=q.front().second;
          q.pop(); 
          for(int k=0; k<4; k++ ){
              int nr=x+dx[k];
              int nc=y+dy[k];
              
              if(safe(nr,nc,n,m) &&  b[nr][nc]!='W' && d[nr][nc]>d[x][y]+1){
                  d[nr][nc]=d[x][y]+1;
                  q.push({nr,nc});
              }
          }
       }
       
        for(int i=0; i<n;i++){
           for(int j=0; j<m;j++){
               if(d[i][j]==1e9){
                   d[i][j]=-1;
               }
           }
       }
       
       return d;
    }
};
