
class Solution {
  public:
    int niceSubarray(int n, vector<int> &arr) {
        int c=0,mn=0,nx=1;
        for(int i=0; i<n; i++){
            if(arr[i]==nx){
                c++;
                nx++;
                mn=max(mn,c);
            }else{
                nx=1;
                c=0;
            }
        }
        return mn;
    }
};



Input:
n = 7
arr = {2,1,2,3,1,2,2}
Output:
3
Explanation:
The subarray {1,2,3} is the longest nice subarray.

Input:
n = 4
arr = {3,5,2,6}
Output:
0
Explanation:
There is no nice subarray.