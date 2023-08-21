

class Solution
{
public:
  int dx[4] = {1, -1, 0, 0};
  int dy[4] = {0, 0, 1, -1};

  bool safe(int x, int y, int n, int m)
  {
    if (x < 0 || y < 0 || x >= n || y >= m)
      return 0;

    return 1;
  }


  
  bool saveCivilians(int n, int m, vector<string> &mx)
  {

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (mx[i][j] == 'C')
        {
          for (int k = 0; k < 4; k++)
          {
            int nr = i + dx[k];
            int nc = j + dy[k];

            if (safe(nr, nc, n, m) && mx[nr][nc] == 'T')
            {
              return 0;
            }
          }
        }
      }
    }
    return 1;
  }
};