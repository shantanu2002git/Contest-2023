#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int x;
    cin>>x;
    string st;
    cin>>st;
  int n=st.size();
  if(n<2){
    cout<<"Ramos"<<endl;
  }
  
  stack<char>stk;
  int c=0;
  
  for(int i=1; i<n; i++){
   if(st[i-1]==st[i]){
    break;
   }else{
    
   }
  }
  return 0;
}