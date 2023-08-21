/*
You are given an integer 
n
N. You need to find an n*n
N×N matrix such that:

Each element of the matrix is an integer from 
1
1 to n*n
All elements of the matrix are unique;
The absolute difference between elements in neighbouring cells is strictly greater than 
1
1.
*/

#include <iostream>
using namespace std;

int main()
{
  // your code goes here
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, cnt = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        printf("%d ", cnt);
        cnt += 2;
        if (cnt > n * n)
          cnt = 2;
      }
      printf("\n");
    }
  }
  return 0;
}