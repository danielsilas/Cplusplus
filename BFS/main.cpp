#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> a[100];
queue<int> Q;
int n, m, x, y, viz[1000];
void in()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> x >> y, a[x].push_back(y), a[y].push_back(x);
}
void BFS(int nod)
{
    cout << "1' sunt la nodul " << nod << endl;
    viz[nod] = 1;
    Q.push(nod);
    while (!Q.empty())
    {
        nod = Q.front();
        for (int i = 0; i <= a[nod].size(); i++)
        {
            if (!viz[a[nod][i]])
            {
                viz[a[nod][i]] = 1;
                Q.push(a[nod][i]);
            }
            Q.pop();
        }
    }
    cout << "</>\n";
}
int main()
{
    int start;
    cout << "nod de inceput ";
    cin >> start;
    in();
    BFS(start);
    return 0;
}
