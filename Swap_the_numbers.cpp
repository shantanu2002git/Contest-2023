#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int a[n], idx[n], res[n];
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
      idx[a[i]] = i;
    }

    for (int i = 1; i <= n; i++)
    {
      int el = a[i];

      int mn = INT_MAX;
      for (int j = i + 1; j <= n; j++)
      {
        if ((j - i) >= k && el > a[j])
        {
          mn = min(mn, a[j]);
        }
      }
      int ix = idx[mn];
      int kl = abs(ix - i);
      if (kl >= k && el > mn)
      {
        res[i] = mn;
        a[ix] = el;
      }
      else
      {
        res[i] = el;
      }
    }

    for (int i = 1; i <= n; i++)
    {
      cout << res[i] << " ";
    }
    cout << endl;
  }
  return 0;
}

/*

5 1 3 2 4
      2   4
*/