#include <iostream>
#include <algorithm>
using namespace std;
int p[100],i,n,x,y,a[100][100];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;++i){
        cin>>x>>y;
        a[x][y]=1;
    }
    for(int i=1;i<=n;++i){
    for(int j=1;j<=n-i+1;j++)
        {
            s+=a[i][j];
        }
        p[i]=s;
        //soon i'l return... 0 :))
    }
    for(int i=1;i<=n;++i){
        if(--p[i])
    }
    return 0;
}
