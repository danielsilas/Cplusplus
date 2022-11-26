#include <fstream>
#include <algorithm>
using namespace std;
#define MMAX 400005
#define NMAX 200005
ifstream f("apm.in");
ofstream g("apm.out");
struct muchie
{
  int x, y, c;
} a[MMAX];
int n, m, tata[NMAX], ind[NMAX];
void cit()
{
  f >> n >> m;
  for (int i = 1; i <= m; i++)
  {
    f >> a[i].x >> a[i].y >> a[i].c;
  }
}
bool cmp(muchie x, muchie y)
{
  return (x.c < y.c);
}
int rad(int x)
{
  while (tata[x] != x)
    x = tata[x];
  return x;
}
int main()
{
  cit();
  sort(a + 1, a + m + 1, cmp);
  for (int i = 1; i <= n; i++)
    tata[i] = i;
  int k = 0, i = 1, ct = 0;
  while (k < n - 1)

  {
    int r1 = rad(a[i].x), r2 = rad(a[i].y);
    if (r1 != r2)

    {
      ++k, ct += a[i].c, ind[k] = i;
      if (r1 < r2)
        tata[r2] = r1;
      else
        tata[r1] = r2;
    }
    ++i;
  }
  g << ct << '\n'
    << k << '\n';
  for (i = 1; i <= k; ++i)
    g << a[ind[i]].x << ' ' << a[ind[i]].y << '\n';
  return 0;
}
