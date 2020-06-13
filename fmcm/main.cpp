#include <queue>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>

#define MAXN 351
#define MAXM 12501
#define INF 0x3f3f3f3f

using namespace std;

int best[MAXN];

class gentleman{
    public:
    bool operator () (int &x, int &y) {
        return best[x] > best[y];
    }
};

vector <int> G[MAXN];
priority_queue <int, vector <int>, gentleman > heap;

int n, m, source, sink, q[MAXN], real[MAXN], capacity[MAXN][MAXN], flow[MAXN][MAXN], cost[MAXN][MAXN], dist[MAXN], dad[MAXN];
int maxflow, mincost;
bool inq[MAXN];

void bellmanford()
{
    int left, right, i, node, son;

    left = right = 0;
    q[right++] = source;
    dist[source] = 0;
    inq[source] = 1;

    while(left < right)
    {
        node = q[left++];
        inq[node] = 0;

        for(i=0; i<G[node].size(); ++i)
        {
            son = G[node][i];
            if(dist[node] + cost[node][son] < dist[son] && flow[node][son] < capacity[node][son])
            {
                dist[son] = dist[node] + cost[node][son];
                if(!inq[son])
                {
                    q[right++] = son;
                    inq[son] = 1;
                }
            }
        }
    }
}

inline int doCost(int x, int y){
    return cost[x][y] + dist[x] - dist[y];
}

inline bool dijkstra()
{
    int i, node, son, minflow, now;

    for(i=1; i<=n; ++i)
        best[i] = INF;

    best[source] = real[source] = 0;

    heap.push(source);
    while(!heap.empty())
    {
        node = heap.top();
        heap.pop();

        if(node == sink) continue;

        for(i=0; i<G[node].size(); ++i)
        {
            son = G[node][i];
            if(best[node] + doCost(node, son) < best[son] && flow[node][son] < capacity[node][son])
            {
                best[son] = best[node] + doCost(node, son);
                real[son] = real[node] + cost[node][son];
                dad[son] = node;
                heap.push(son);
            }
        }
    }

    if(best[sink] == INF) return 0;

    now = 0;
    minflow = INF;
    for(node=sink; node!=source; node=dad[node])
    {
        son = dad[node];
        minflow = min(minflow, capacity[son][node] - flow[son][node]);
        now += cost[son][node];
    }

    for(node=sink; node!=source; node=dad[node])
    {
        son = dad[node];
        flow[son][node] += minflow;
        flow[node][son] -= minflow;
    }

    maxflow += minflow;
    mincost += real[sink] * minflow;

    return 1;
}

int main()
{
    freopen("fmcm.in", "r", stdin);
    freopen("fmcm.out", "w", stdout);

    int i, x, y, p, c;

    scanf("%d%d%d%d", &n, &m, &source, &sink);

    for(i=1; i<=m; ++i)
    {
        scanf("%d%d%d%d", &x, &y, &c, &p);
        G[x].push_back(y);
        G[y].push_back(x);
        capacity[x][y] = c;
        cost[x][y] = p;
        cost[y][x] = -p;
    }

    for(i=1; i<=n; ++i)
        dist[i] = INF;

    bellmanford();

    for(; dijkstra(); );

    printf("%d", mincost);

    return 0;
}
