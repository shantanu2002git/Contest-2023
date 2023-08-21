#include <bits/stdc++.h>
using namespace std;


// class Solution {
// public:
//     bool isFascinating(int n) {
//         int n1=n*2,n2=n*3;
//         string s1=to_string(n),s2=to_string(n1),s3=to_string(n2);
//         cout<<s1<<" "<<s2<<" "<<s3<<endl;
//         string conc=s1+s2+s3;
//         int cs=0;
//         // set<char>st(conc.begin(),conc.end());
//         // for(auto it : st){
//         //   cout<<it<<" ";
//         // cs=cs+it-'0';
//         // }
//         for(auto it : conc) {
//           cs=cs+it-'0';
//         }
//        cout<<cs;
//         return cs==45;
//     }
// };


class Solution {
public:
    bool isFascinating(int n) {
        int n1=n*2,n2=n*3;
        string s1=to_string(n),s2=to_string(n1),s3=to_string(n2);
       // cout<<s1<<" "<<s2<<" "<<s3<<endl;
        string conc=s1+s2+s3;
        int cs=0;
        map<char,int>mp;
        for(int i=0; i<conc.size(); i++){
          mp[conc[i]]++;
        }
        for(auto it : mp){
          //cout<<it.first<<" "<<it.second<<endl;
          if(it.second>1){
            return 0;
          }

         else{
            cs=cs+it.first-'0';
          }
        }
       // cout<<cs;
        return cs==45;
    }
};
int main(){
  Solution so;
  int n;
  cin>>n;
  
  cout<<so.isFascinating(n)<<endl;
  return 0;
}