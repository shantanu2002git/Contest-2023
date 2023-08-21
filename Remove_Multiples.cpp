#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int m,n;
    cin>>m>>n;
    int a[n],s=0;
    for(int i=0; i<n; i++){
      cin>>a[i];
      s=s+a[i];
    }
int sl=m*(m+1)/2;
    cout<<(sl-s)<<endl;

  }
  return 0;
}