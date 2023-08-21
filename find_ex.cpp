/*

int a,b,c,d;
in the a%b=c%d;
(a+x)%b=(c+x)%d;

x=?

*/

/*
first try the number adding with a number x=1 both sides if the remainder comes same then your problem is done .
If this condition is not correct we will have to find the lcm and add to both sides.
We can simply add lcm both sides and we will get the same result but the chef is asking for the minimum number we need
so we have subtracted the rem from lcm so we can get the remainder 0.
*/
#include <bits/stdc++.h>
using namespace std;
#define __lcm(x,y)   (x*y)/__gcd(x,y);

signed main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if ((a + 1) % b == (c + 1) % d)
		{
			cout << "1" << endl;
			continue;
		}
		int value = __lcm(b, d);
		cout << value - (a % b) << endl;// ll x = lcm(b,d) - gcd(a%b,c%d);
	}
}