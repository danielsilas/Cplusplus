#include <iostream>

using namespace std;

int main()
{
    int n,a[100][100],b[100],i,j;
    cin>>n;
    for(i=1;i<=n;++i)cin>>b[i];
    for(i=1;i<=n;i++)a[1][i]=b[i];
    for(i=2;i<=n;i++)
        for(j=1;j<=i+1;j++){
            a[i][j]=a[i-1][j+1];
        }
        a[n][n]=30;
        a[n][n-1]=20;
        a[n][n-2]=10;
        a[n-1][n]=20;
        a[n-1][n-1]=10;
        a[n-2][n]=10;
        for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)cout<<a[i][j]<<" ";
        cout<<endl;}

    return 0;
}
