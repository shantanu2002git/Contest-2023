#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    int y;cin>>y;
    for(int i=0; i<n;i++){
      cin>>a[i];
    }
    int b[n+10];
    set<int>st;
    for(int i=0; i<n;i++){
      st.insert(a[i] || y);
      cout<<(a[i] || y)<<endl;

    }
    cout<<st.size()<<endl;
  }
  return 0;
}