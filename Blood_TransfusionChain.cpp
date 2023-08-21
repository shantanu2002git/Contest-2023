#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int Ai=0,Bi=0;
    for(int i=0; i<n; i++){
      string p;
      cin>>p;
      if(p=="A"){
        Ai++;
      }else if(p=="B"){
        Bi++;
      }
    }
    cout<<(n-min(Ai,Bi))<<endl;
  }
  return 0;
}