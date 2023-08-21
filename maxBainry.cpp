#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r;cin>>r;
        int k;cin>>k;
         string bn;cin>>bn;
       if(bn[0]=='0'){
           bn[0]='1';
           k--;
       }
       
       string zn="";
       for(int i=0; i<k; i++) {
       zn+='0';
       }
       bn+=zn;
       
       cout<<bn<<endl;
       
    }
    return 0;
}