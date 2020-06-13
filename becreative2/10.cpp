#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
ifstream cin("apm.in");
ofstream cout("apm.out");
vector <pair<int , pair<int,int> > >edges;
int n,m,x,y,z,tata[40003];
int cauta(int x)
{
    if(x==tata[x])return x;
    else return cauta(tata[x]);
}
bool unite(int x,int y)
{
    x=cauta(x);
    y=cauta(y);
    if(x==y)return false;
    else
    {
        tata[x]=y;
        return true;
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)tata[i]=i;
    for(int i=1;i<=n;i++){cin>>z;
    edges[i].first=z;
}
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        edges[i].second.first=x;
        edges[i].second.second=y;
    }
    sort(edges.begin(),edges.end());
    vector<pair<int,int> >apm;
    int cost_total=0;
    for(int i=0;i<edges.size();++i)
        if(unite(edges[i].second.first,edges[i].second.second))
        {
            cost_total+=edges[i].first;
            apm.push_back(make_pair(edges[i].second.first,edges[i].second.second));
        }
 
    cout<<cost_total<<"\n";
}
