#include <iostream>
using namespace std;
int k;
void inserare(long &n)
{
    int v[35];
    long m=n,p=1,ans=0;
    while(m)
    {
        v[++k]=m%10;
        m/=10;
    }
    ans=v[k];
    if(ans%2==0)ans=ans*10+v[k]/2;
    for(int i=k-1;i>=1;--i)
        if(v[i]%2==0){
            ans=ans*10+v[i];
            ans=ans*10+v[i]/2;}
        else ans=ans*10+v[i];
        n=ans;
}
int main()
{
    long n;
    cin>>n;
    inserare(n);
    cout<<n;
    return 0;
}
