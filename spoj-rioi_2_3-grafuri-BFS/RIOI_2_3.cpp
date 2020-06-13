#include <iostream>
#include <algorithm>
#include <set>
#include <queue>
#include <cstring>
using namespace std;
int n, sx, sy, ex, ey;
int a[51][51];
bool bio[51][51];
queue<pair<int, int> > red;
bool plat[11];

bool k()
{
        queue<pair<int, int> > red;
    red.push(make_pair(sx, sy));
    while (!red.empty())
    {
        pair<int, int> tr = red.front();
        red.pop();
        int x = tr.first, y = tr.second;
        if (x == ex && y == ey)return true;
        if (bio[x][y])continue;
        bio[x][y] = true;
        if (x - 1 >= 0 && !bio[x - 1][y])
        {
            if (plat[a[x - 1][y]])
            {
                red.push(make_pair(x - 1, y));
            }
        }
        if (y - 1 >= 0 && !bio[x][y - 1])
        {
            if (plat[a[x][y - 1]])
            {
                red.push(make_pair(x, y - 1));
            }
        }
        if (x + 1 < n && !bio[x + 1][y])
        {
            if (plat[a[x + 1][y]])
            {
                red.push(make_pair(x + 1, y));
            }
        }
        if (y + 1 < n && !bio[x][y + 1])
        {
            if (plat[a[x][y + 1]])
            {
                red.push(make_pair(x, y + 1));
            }
        }
    }
    return false;
}
int main()
{
    cin.sync_with_stdio(false);
    int t;
    cin >> t;
    int limit = 1 << 10;
    for (int l = 0; l < t; ++l)
    {
        cin >> n;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
            cin >> a[i][j];
        cin >> sx >> sy >> ex >> ey;
        int sol = 11;
        int poce = (1 << a[sx][sy]), kr = (1 << a[ex][ey]);
        for (int bit = 1; bit < limit; ++bit)
        {
            // je li a[sx][sy], a[ex][ey] u bit maski?
            if (bit & poce&& bit & kr)
            {
                // rastavi bit masku
                int ko = 1;
                int i = 0;
                int size = 0;
                while (ko < limit)
                {
                    if (bit & ko)
                    {
                        ++size;
                        plat[i] = true;
                    }
                    ko <<= 1;
                    ++i;
                }
                if (size < sol && k())
                    sol = size;
            }
        }
        cout << sol << endl;
    }
    return 0;
}
