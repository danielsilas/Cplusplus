#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int k=0,n,m;
    cin>>n;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n-i+1;++j)
    {
        a[i][j]=++k;
        a[n-j+1][n-i+1]=a[i][j];
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j)
        cout<<a[i][j]<<" ";
    cout<<endl;}

    return 0;
}
