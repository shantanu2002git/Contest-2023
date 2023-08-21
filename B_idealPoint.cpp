/*https://codeforces.com/contest/1795/problem/B*/


#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t1, c = 0, r, hv, nv, f, p1, p2;
  cin >> t1;
  while (t1--)
  {
    int t2, k;
    hv = 0, nv = 0,
    cin >> t2 >> k;
    while (t2--)
    {
      int x, y;

      cin >> x >> y;

      if (x <= k && k <= y)
      {
        // cout<<" "<<x<<" "<<y<<endl;
        hv++;
      }
      else
      {
        nv++; // cout<<" "<<x<<" "<<y<<endl;
      }

      //
    }
     cout<<hv<<" "<<nv<<endl;
    if (hv != 0 && nv != 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}





/*
10 2
2 7
7 9
4 8
6 8
6 10
1 5
7 9
2 10
1 6
6 7
6 10
2 8
5 8
4 5
3 6
7 9
4 9
7 8
7 7
1 5
4 5
4 4
2 10
7 10
1 10
1 7
6 8
9 2
5 5
5 7
1 4
2 5
6 9
2 2
3 8
3 4
1 7
9 3
5 10
4 9
2 5
5 9
1 9
2 3
8 9
4 8
1 3
7 1
4 10
8 10
7 10
1 5
1 3
2 3
3 9
6 1
2 6
3 5
4 7
4 8
6 6
8 10
8 5
4 6
6 7
3 5
5 7
5 6
6 9
4 6
2 9
3 9
2 8
5 10
1 4
7 7
1 1
4 9
4 6
7 9
3 8
3 6
5 9
8 4
2 4
1 2
2 6
2 4
1 2
10 10



4 7
3 6
7 9
2 6
1 3
1 7
9 10


*/