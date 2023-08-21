class Solution
{
  bool cal(char vl)
  {
    return (vl == 'a' || vl == 'e' || vl == 'i' || vl == 'o' || vl == 'u');
  }

public:
  int s = 0;
  int mx = -1e9;
  unordered_map<string, int> mp;
  string valuableString(int n, vector<string> &arr)
  {
    // code here
    int sz;
    string ans;
    vector<pair<string, int>> vp;
    for (auto it : arr)
    {
      sz = it.size();
      for (auto ix : it)
      {
        s = s + cal(ix);//vol
      }
      int df1 = sz - s;//cons
      int df=abs(df1-s);
      vp.push_back({it, df});
      s = 0;
    }
    for (auto ik : vp)
    {
      //cout << ik.first << " " << ik.second;

      if(mx<ik.second){
         mx=ik.second;
         ans=ik.first;
      }
    }

    return ans;
  }
};




/*Input:
n = 3
arr = {"house","car","tree"}
Output:
"house"
Explanation:
The strings "house" and "car" both have value 1. So, "house" should be answer.

Input:
n = 3
arr={"geeksforgeeks","interview","series"}
Output:
"geeksforgeeks"
Explanation:
The value of "geeksforgeeks" is 3, and it is the maximum.


*/
