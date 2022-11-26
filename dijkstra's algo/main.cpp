#include <fstream>
#include <vector>
#include <queue>
using namespace std;
using PII = pair<int, int>;
using VI = vector<int>;
#define pb push_back
const int Inf = 0x3f3f3f3f;
vector<vector<PII>> G;
int n, m;
VI d;
// distantele minime pana la sursa
ifstream fin("dijkstra.in");
ofstream fout("dijkstra.out");
void Read();
void Dijkstra(int x, VI &d);
int main()
{
  Read();
  Dijkstra(1, d);

  for (int x = 2; x <= n; ++x)
    if (d[x] != Inf)
      fout << d[x] << ' ';
    else
      fout << 0 << ' ';

  fin.close();
  fout.close();
}

void Dijkstra(int x, VI &d)
{
  int dx, y, w;
  priority_queue<PII, vector<PII>, greater<PII>> Q;
  d.resize(n + 1, Inf);
  d[x] = 0;
  for (Q.push({0, x}); !Q.empty();)

  {
    x = Q.top().second, dx = Q.top().first;
    Q.pop();
    if (d[x] < dx)
      continue;
    for (auto p : G[x])

    {
      y = p.first;
      w = p.second;
      if (d[y] > d[x] + w)

      {
        d[y] = d[x] + w;
        Q.push({d[y], y});
      }
    }
  }
}
void Read()
{
  fin >> n >> m;
  int x, y, cost;
  G.resize(n + 1); // acum G
                   // G = vector<vector<PII>>(n + 1);
  while (m--)

  {
    fin >> x >> y >> cost;
    G[x].pb({y, cost});
  }
}
