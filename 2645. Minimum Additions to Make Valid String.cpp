#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int addMinimum(string word) {
    int ans = 0, i = 0;
    while(i < word.size()){
        (word[i] == 'a') ? i++ : ans++;
        cout<<ans<<"  ";
        (word[i] == 'b') ? i++ : ans++;
        cout<<ans<<"  ";
        (word[i] == 'c') ? i++ : ans++;
        cout<<ans<<"  ";
    }
    return ans;
}
};
int main(){
  string st;
  cin>>st;
  Solution ob;
  cout<<ob.addMinimum(st);
  return 0;
}
