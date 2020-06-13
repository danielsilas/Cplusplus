#include <fstream>
#include <vector>
using namespace std;
ifstream cin("plan.in");
ofstream cout("plan.out");
int a[100][100],n,x,y,m,s=0,d=0,k=0;
vector<int>multX;
vector<int>multY;
int main()
{
    int Y[100],X[100];
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        a[x][y]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
           if(a[i][j]==1)s++;
           if(a[j][i]==1)d++;
        }
        Y[i]=s;X[i]=d;
        s=0;d=0;
    }
    for(int i=1;i<=n;i++)
    {
        if(X[i]==0){multX.push_back(i);k++;}
        if(Y[i]==0){multY.push_back(i);k++;}
    }
    cout<<k<<endl;
    return 0;
}
