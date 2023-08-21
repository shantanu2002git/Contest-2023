#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  int ms[10]={6,2,5,5,4,5,6,3,7,6};
  while(t--){
    int x, y;
    cin>>x>>y;
    int s=x+y;
    string sr=to_string(s);
    int sum=0;
    for(int i=0; i<sr.size(); i++){
       sum=sum+ms[(int)(sr[i]-'0')];
    }
cout<<sum<<endl;
  }
  return 0;
}