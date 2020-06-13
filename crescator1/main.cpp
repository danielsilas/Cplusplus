#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("crescator1.in");
ofstream cout("crescator1.out");
int i,n,j,a[100],b[100001],k=0;
int scif(int n){
    if(n==0)return 0;
    else return n%10+scif(n/10);
}
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    b[1]=a[1];

    sort(a+1,a+n+1);
    for(i=1;i<=a[n];i++){
        b[i+1]=b[i]+scif(b[i]);
    }
    for(i=1;i<=n;i++)
        for(int l=1;l<=a[n];l++)
        if(a[i]==b[l])k++;
    cout<<k<<'\n';
    return 0;
}
