/*

*/

/*
Observation
Line 1
There are 3 basic cases in which we have to print no.
1.When a[i] != b[i] when i=0 or i=n-1 as we can not select an index lesser or greater than i in this situation.
2.When a[i]=1 and b[i]=0 in this case it is impossible to convert a[i] to 0 as performing OR operation with 1 always results 1.
3.When a[i]=0 and b[i]=1 in this case to convert a[i] to 1 we need atleast one element in array with 1 or else we can not make a[i] equal to 1.
In remaining all cases the answer is YES.
*/

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  // your code goes herei
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll i, a[n], b[n], o = 0;
    for (i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == 1)
      {
        o++;
      }
    }
    for (i = 0; i < n; i++)
    {
      cin >> b[i];
    }
    ll c = 0;
    for (i = 0; i < n; i++)
    {
      if (a[i] != b[i])
      {
        if (i == 0 || i == n - 1)
        {
          c = 1;
          break;
        }
        else if (a[i] == 1)
        {
          c = 1;
          break;
        }
        else
        {
          if (o == 0)
          {
            c = 1;
            break;
          }
          else
          {
            a[i] = 1;
          }
        }
      }
    }
    if (c == 0)
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