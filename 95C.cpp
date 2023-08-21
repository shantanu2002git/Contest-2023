/*  having arr of n item, want to make this array a permution of int (1-n). in one oeration can choose two integers i(0<=i<n) and x(x>0)
then replace  arr[i] with arr[i] mod x. result minimum number of operation to achieve this goal otherwise return -1


Input:
n = 2
arr = {1,7}
Output:
1
Explanation:
In the first operation, you will choose i=1, and x=5, so the arr[1] will be (7%5)=2, now the array {1,2} is a permutation.


Input:
n = 3
arr = {1,5,4}
Output:
-1
Explanation:
It's not possible to make the 3rd element 2, or 3, so the answer will be -1.



*/

class Solution{
  public:
    int makePermutation(int n, vector<int> &arr) {
       vector<int>v(n+1),tem;
       for(auto i: arr){
           if(i<=n && !v[i]) v[i]=1;
           else tem.push_back(i);
       }
       sort(tem.begin(), tem.end());
       int j=0;
       for(int i=1; i<=n; i++){
           if(v[i]) continue;
           if(2*(i+1)-1>tem[j]) return -1;
           j++;
       }
       return j;
       
    }
};