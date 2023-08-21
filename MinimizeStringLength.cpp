#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizedStringLength(string s) {
        int n=s.size();
        map<char,int>mp;
set<char>st;
        for(int i=0; i<n; i++){
mp[s[i]]++;
st.insert(s[i]);
        }
int c=0,k;
        for(auto it : mp){
          if(it.second>=2){
            k=n-it.second+1;
          }
        }
        return k==0 ? n : st.size();

    }
};

int main(){
  string num;
  cin>>num;
  Solution so;
  cout<<so.minimizedStringLength(num);
  return 0;
}