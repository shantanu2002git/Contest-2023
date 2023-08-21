class Solution {
    private:
    bool check(vector<int>&a, int n , int k, int c){
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0; i<c; i++){
            pq.push(0);
        }
        int mx=0;
        for(auto x:a){
            int t=pq.top();
            pq.pop();
            t=t+x;
            pq.push(t);
            mx=max(t,mx);
            if(mx>k)
                 return 0;
        }
        return mx<=k;
    }
  public:
    int minimizeComputers(int n, int k, vector<int> &arr) {
       int low=1,high=(int)(1e5+1),ans;
       while(low<=high){
           int mid=(low+high)/2;
           if(check(arr,n,k,mid)){
               high=mid-1,ans=mid;
           }else{
               low=mid+1;
           }
       }
       return ans;
    }
};