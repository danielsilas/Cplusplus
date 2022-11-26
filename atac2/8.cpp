#include <fstream>
#include <vector>
#include <bitset>
#include <string.h>
#include <queue>
#include <algorithm>
#define pb push_back
using namespace std;
ifstream fin("atac2.in");
ofstream fout("atac2.out");
const int MAXN = 10005;
const int MAXU = 75;
const int oo = 0x3f3f3f3f;
i == i = i = i = i = i = iip - p - dpa - f hszgh o typedef vector<int> Graph[MAXN];
typedef vector<int>::iterator It;
int N, M, R, L, X, where[MAXU], C[2 * MAXU][2 * MAXU], Sink, Source, d[MAXN], Father[MAXN], Mark[MAXN], F[2 * MAXU][2 * MAXU], Cost[2 * MAXN][2 * MAXN];
vector<int> G[MAXN];
vector<int> E[2 * MAXU];
queue<int> Q;
bitset<MAXN> inQ;
inline void buildDistances(const int &stNode)
{
    memset(d, -1, sizeof(d));
    Q.push(stNode);
    d[stNode] = 0;
    while (!Q.empty())
    {
        int Node = Q.front();
        Q.pop();
        for (vector<int>::iterator it = G[Node].begin(), fin = G[Node].end(); it != fin; ++it)
            if (d[*it] == -1)
            {
                d[*it] = d[Node] + 1;
                Q.push(*it);
            }
    }
}
inline void buildNetwork()
{
    for (int i = 1; i <= R; ++i)
    {
        buildDistances(where[i]);
        for (int j = 0; j < L; ++j)
        {
            E[i].pb(j + 1 + R);
            E[j + 1 + R].pb(i);
            C[i][j + 1 + R] = 1;
            Cost[i][j + 1 + R] = d[G[X][j]];
            Cost[j + 1 + R][i] = -d[G[X][j]];
        }
    }
}
inline bool BF(const int stNode)
{
    memset(d, oo, sizeof(d));
    inQ.reset();
    Q.push(stNode);
    d[stNode] = 0;
    inQ[stNode] = true;
    while (!Q.empty())
    {
        int Node = Q.front();
        inQ[Node] = false;
        Q.pop();
        for (vector<int>::iterator it = E[Node].begin(), fin = E[Node].end(); it != fin; ++it)
        {
            if (C[Node][*it] - F[Node][*it] > 0 && d[*it] > d[Node] + Cost[Node][*it])
            {
                d[*it] = d[Node] + Cost[Node][*it];
                Father[*it] = Node;
                if (!inQ[*it])
                {
                    Q.push(*it);
                    inQ[*it] = true;
                }
            }
        }
    }
    return (d[Sink] != oo);
}
inline void maximumMatching()
{
    int Ans = 0;
    while (BF(Source))
    {
        for (int i = Sink; i != Source; i = Father[i])
        {
            ++F[Father[i]][i];
            --F[i][Father[i]];
        }
        Ans += d[Sink];
    }
    fout << Ans << '\n';
}
int main()
{
    fin >> N >> M >> R >> X;
    Source = 0;
    for (int i = 1; i <= R; ++i)
    {
        fin >> where[i];
        Mark[where[i]] = i;
        E[0].pb(i);
        C[0][i] = 1;
    }
    for (int i = 0; i < M; ++i)
    {
        int x, y;
        fin >> x >> y;
        G[x].pb(y);
        G[y].pb(x);
    }
    L = G[X].size();
    Sink = R + L + 1;
    for (int i = 0; i < L; ++i)
    {
        E[i + 1 + R].pb(Sink);
        C[i + 1 + R][Sink] = 1;
    }
    buildNetwork();
    maximumMatching();
    return 0;
}
