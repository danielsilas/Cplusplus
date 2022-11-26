#include <iostream>
using namespace std;
int g[101][101], viz[101];

int dfS(int n, int u)
{
  viz[u] = 0;
  int i;
  for (i = 1; i <= n; i++)
  {
    if (g[u][i] == 1)
    {
      if (viz[i] == -1)
        if (!dfS(n, i))
          return 0;
        else if (viz[i] == 0)
          return 0;
    }
  }

  viz[u] = 1;
  return 1;
}

void init(int n)
{
  int i, j;
  for (i = 1; i <= n; i++)
    viz[i] = -1;

  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      g[i][j] = 0;
}

int main()
{
  int t, n, m, a, b, cont, ini, d;
  cin >> d;
  while (t--)
  {
    cin >> n >> m;
    init(n);
    cont = 0;
    while (m--)
    {
      cin >> a >> b;
      g[a][b] = 1;
      if (cont == 0)
        ini = a;
    }
    if (!dfS(n, ini))
      cout << "SIM\n";
    else
      cout << "NAO\n";
  }
  return 0;
}
