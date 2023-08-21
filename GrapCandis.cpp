#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;

  while(t--){
    int n;cin>>n;
    int ev[n],od[n];
    int evs=0,ods=0;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];

    }

for(int i=0; i<n; i++){
  if(a[i]%2==0){
evs=evs+a[i];
  }else{
    ods=ods+a[i];
  }
}

if(evs>ods){
  cout<<"YES"<<endl;
}else{
  cout<<"NO"<<endl;
}
  }
  return 0;
}