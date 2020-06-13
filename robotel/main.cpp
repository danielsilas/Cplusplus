#include <iostream>

using namespace std;
int a[100][100];
void robotel_v1(int n,int &nr)
{
    int i=n/2+1,j=n,s=0,k=0;
    int l=n*n;
    while(k!=l)
    {

        a[i][j]=++k;
        if(j==n && i>1 && a[i-1][1]==0)
            --i,j=1;
        else
        if(i==1 && j<n && a[n][j+1]==0)
            i=n,j++;
        else
        if(j<n && i>1&& a[i-1][j+1]==0)
            --i,++j;
        else
        if(i==1 && j==n && a[n][1]==0)
            i=n,j=1;
        else --j;
        if(i+j==n+1)s+=k;
    }
    s+=n;
    nr=s;
}
int robotel_v2(int n,int &nr)
{
    nr=(n*n*n+n)/2;
}
int main()
{
    int n,nr=10;
    cin>>n;
    robotel_v1(n,nr);
    cout<<nr<<endl;
    nr=10;
    robotel_v2(n,nr);
    cout<<nr;
    return 0;
}
