#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  stack<string>st;
  while(t--){
int n;
cin>>n;

while(n--){
  string s;
  cin>>s;
  st.push(s);
}

set<string>si;
while(!st.empty()){
  if(!si.count(st.top())){
    cout<<st.top().substr(st.size()-2,2);
    si.insert(st.top);
  }
  st.pop();
  }
  return 0;
}