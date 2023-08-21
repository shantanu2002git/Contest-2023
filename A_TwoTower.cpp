/*https://codeforces.com/contest/1795/problem/A*/

/*
There are two towers consisting of blocks of two colors: red and blue. Both towers are represented by strings of characters B and/or R denoting the order of blocks in them from the bottom to the top, where B corresponds to a blue block, and R corresponds to a red block.

These two towers are represented by strings BRBB and RBR.
You can perform the following operation any number of times: choose a tower with at least two blocks, and move its top block to the top of the other tower.


The pair of towers is beautiful if no pair of touching blocks has the same color; i. e. no red block stands on top of another red block, and no blue block stands on top of another blue block.

You have to check if it is possible to perform any number of operations (possibly zero) to make the pair of towers beautiful.

Input
The first line contains one integer t
 (1≤t≤1000
) — the number of test cases.

Each test case consists of three lines:

the first line contains two integers n
 and m
 (1≤n,m≤20
) — the number of blocks in the first tower and the number of blocks in the second tower, respectively;
the second line contains s
 — a string of exactly n
 characters B and/or R, denoting the first tower;
the third line contains t
 — a string of exactly m
 characters B and/or R, denoting the second tower.
Output
For each test case, print YES if it is possible to perform several (possibly zero) operations in such a way that the pair of towers becomes beautiful; otherwise print NO.

You may print each letter in any case (YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).

Example
inputCopy
4
4 3
BRBB
RBR
4 7
BRBR
RRBRBRB
3 4
RBR
BRBR
5 4
BRBRR
BRBR
outputCopy
YES
YES
YES
NO
Note
In the first test case, you can move the top block from the first tower to the second tower (see the third picture).

In the second test case, you can move the top block from the second tower to the first tower 6
 times.

In the third test case, the pair of towers is already beautiful.


*/
#include <bits/stdc++.h>

using namespace std;

/*
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    reverse(t.begin(), t.end());
    s += t;
    int cnt = 0;
    for (int i = 1; i < n + m; ++i) cnt += s[i - 1] == s[i];
    cout << (cnt <= 1 ? "YES\n" : "NO\n");
  }
  */

 int main(){
  int t;
  cin>>t;
  while(t--){
    int m,n;
    string lfs1,rgst2;
    cin>>m>>n>>lfs1>>rgst2;

    reverse(lfs1.begin(),lfs1.end());
    string sr=rgst2+lfs1;

//cout<<sr<<endl;
int cnt=0;
for(int i=1; i<sr.size(); i++){
   cnt += (sr[i - 1] == sr[i]);  //IF TRUE =1 -------------------------------- IF FALSE =0 --------------------------------
}
cout<<(cnt<=1 ? "YES\n" : "NO\n");

  }
 
}
