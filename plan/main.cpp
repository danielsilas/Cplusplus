#include <fstream>
#include <vector>
using namespace std;
ifstream cin("plan.in");
ofstream cout("plan.out");
struct plan{
int x,y;
}a[1501];
int m1[1001][1001];
vector<pair<int,int> > cord;
int main()
{
    int n,m,x,y;
    int cnt1=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a[i].x>>a[i].y;
        if(a[i].x==a[i].y)m1[a[i].x][a[i].y]=0;
        else
        m1[a[i].x][a[i].y]=1;
    }
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        {
         if(j>i)
                if(m1[i][j]==0 && m1[j][i]==0)cnt1++,cord.push_back(make_pair(i,j));
        }
    }
    cout<<cnt1<<endl;
    for(int i=0;i<cord.size();i++)
        cout<<cord[i].first<<" "<<cord[i].second<<endl;
    return 0;
}
