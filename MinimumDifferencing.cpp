#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
int ev=0,od=0;
  for(int i=0; i<n; i++){
    if(a[i]%2==0){
      ev++;
    }else{
      od++;
    }
  }
int evs=0,ods=0,mn=INT_MAX;
  int mx=max(ev,od);
  while(mx--){
    for(int i=0; i<n; i++){
      if(a[i]%2==0){
        evs=a[i]/2;
        a[i]=a[i]/2;
        cout<<evs<<" ";
         mn=min(mn,(abs(evs-ods)));
      }else{
        ods=a[i]*k;
        a[i]=a[i]*k;
        //cout<<ods<<" ";
         mn=min(mn,(abs(evs-ods)));
      }
     
    }
  }
  cout<<mn;
  return 0;
}


