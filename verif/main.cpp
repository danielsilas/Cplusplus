#include <iostream>

using namespace std;
int v[200001];
int main()
{
    int m,n,a[100001],b[100001],k=0;
    cin>>n;
    for(int i=1; i<=n; ++i)
        cin>>a[i];
    cin>>m;
    for(int i=1; i<=m; ++i)
        cin>>b[i];
    int i=1,j=1;
    while(i<=n && j<=m)
    {
        int x=a[i];
        int y=b[j];
        if(x>y)
        {
            v[++k]=y;
            ++j;
        }
        else
        {
            v[++k]=x;
            ++i;
        }
    }
    if(i==n+1)
    {
        for(int l=j; l<=m; ++l)
            v[++k]=b[l];
    }
    if(j==m+1)
    {
        for(int l=i; l<=n; ++l)
            v[++k]=a[l];
    }
    for(int i=1; i<=k; ++i)
        cout<<v[i]<<" ";
}
