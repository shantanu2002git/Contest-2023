class Solution
{

public:
  int dx[4] = {1, -1, 0, 0};
  int dy[4] = {0, 0, -1, 1};
  bool valid(int x, int y, int n, int m)
  {
    if (x < 0 || y < 0 || x >= m || y >= n)
    {
      return 0;
    }
    return 1;
  }
  bool avoidFire(int n, int m, int x, int y, vector<vector<int>> &arr)
  {

    vector<vector<int>> fdis(n, (vector<int>(m, INT_MAX)));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (arr[i][j] == 1)
        {
          q.push({i, j});
          fdis[i][j] = 0;
        }
      }
    }

    while (!q.empty())
    {
      auto tp = q.front();
      int xi = tp.first, yi = tp.second;
      q.pop();
      for (int i = 0; i < 4; i++)
      {
        int nx = xi + dx[i];
        int ny = yi + dy[i];
        if (valid(nx, ny, n, m) && fdis[nx][ny] > fdis[xi][yi] + 1)
        {
          fdis[nx][ny] = fdis[xi][yi] + 1;
          q.push({nx, ny});
        }
      }
    }

    vector<vector<int>> dis(n, (vector<int>(m, INT_MAX)));
    q.push({x, y});
    dis[x][y] = 0;

    while (!q.empty())
    {
      auto tp = q.front();
      int xi = tp.first, yi = tp.second;
      q.pop();
      for (int i = 0; i < 4; i++)
      {
        int nx = xi + dx[i];
        int ny = yi + dy[i];
        if (valid(nx, ny, n, m) && fdis[nx][ny] > dis[xi][yi] + 1)
        {
          dis[nx][ny] = dis[xi][yi] + 1;
          q.push({nx, ny});
        }
      }
    }

    if (dis[n - 1][m - 1] != INT_MAX)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
};
