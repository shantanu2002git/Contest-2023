#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestSemiRepetitiveSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
string str="";
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                string substring = s.substr(i, j - i);
                int count = 0;

                for (int k = 0; k < substring.length() - 1; k++) {
                    if (substring[k] == substring[k + 1]) {
                        count++;
                    }
                }
     
                if (count <= 1) {
                  if(maxLength<j-i){
                    maxLength=j-i;
                    str=s.substr(i,j-i);
                  }
                    maxLength = max(maxLength, j - i);
                }
            }
        }
        cout<<str.size()<<endl;
          return str;
       
       // return maxLength;
    }
};

int main() {
    Solution so;
    string s;
    cin >> s;
    cout << so.longestSemiRepetitiveSubstring(s)<<endl;
    
    return 0;
}
