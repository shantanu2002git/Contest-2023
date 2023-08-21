
class Solution {
  public:
    int saveFlowers(int n, vector<int> &a, string s) {
       int flag=0;
       int ans=0,sum=0;
       int mn=INT_MAX;
       for(int i=n-1; i>=0;  i--){
           if(s[i]=='1'){
               sum+=a[i];
               mn=min(mn,a[i]);
               flag=1;
           }
           else{
               if(flag){
                   sum=sum+a[i];
                   mn=min(mn,a[i]);
                   ans=ans+(sum-mn);
                   flag=0;
                   mn=INT_MAX;
                   sum=0;
                   
               }
           }
       }
       
      if(flag){
          ans+=(sum);
      }
       return ans;
    }
};
/*TTC

1 2 4
1 1 1


1 4 5
0 1 1

8 2 3 1 5 2
0 0 1 0 1 1


9
6 5 10 3 1 2 10 1 6
110000110

*/