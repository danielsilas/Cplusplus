#include <fstream>
#include <algorithm>
#define ll long long
using namespace std;
ifstream cin("pal.in");
ofstream cout("pal.out");
ll n,x,m[1001][500];
int v;
short digits(ll x)
{
    ll y=x;
    int k=0;
    while(y)
    {
        k++;
        y/=10;
    }
    return k;
}
ll next_palindrome(ll x)
{
    if(x/10==0)return x;
    ll F,S,d;
    int k=digits(x),t,cF,cS,pF,pS;
    if(k%2==0)
    {
        t=k/2-1;
        d=1;
        while(t-->0)d*=10;
        F=x/d;
        cS=F%10;
        F/=10;
        cF=F%10;
        pF=F/10%10;
        pS=x/d/10%10;
        if(cF<cS)
        {
        while(cF<cS)cF++;
        if(pF<pS)cF++;
        }
        F=F/10*10+cF;
        S=F;
        while (S)
            {
                F=F*10+S%10;
                S/=10;
            }
    }
    else
    {
        t=k/2-1;
        d=1;
        while(t-->0)d*=10;
        F=x/d;
        S=F%10;
        F/=10;
        cF=F%10;
        F/=10;
        if(F%10 < S)cF++;
        S=F;
        F=F*10+cF;
        while (S)
            {
                F=F*10+S%10;
                S/=10;
            }
    }
    return F;
}
long long deimpartit(long long n){
    int k=digits(n),p=10;
    while(k-->0)p*=10;
    return p;
}
bool verif(long long n,long long m){
    int u=deimpartit(m);
    while(n){
        if(n%u==m)return 1;
        n/=10;
    }
    return 0;
}
int sela(long long n,int y){
    while(y-->0)n/=10;
        return n%10;
}
int main()
{

    cin>>v>>n;
    if(v==1)
    {
        for(;n;n--)
        {
            cin>>x;
            cout<<next_palindrome(x)<<" ";
        }
    }
    else
    {
        for(int i=1;i<=n;++i)
        {
            cin>>x;
            m[i][1]=next_palindrome(x);
        }
        int k=1,kk=-1,p;
        for(int i=1;i<=n;++i)
    {
            for(int j=1;j<=n;++j)
        {
            if(m[i][1]>=m[j][1] && verif(m[i][1],m[j][1]) && sela(m[i][1],digits(m[i][1])/2)==sela(m[j][1],digits(m[j][1])/2))
            {
                k++;
                m[i][k]=m[j][1];
                if(k>kk)kk=k,p=i;
            }
        }
    k=1;
    }
        sort(m[p]+2,m[p]+kk+1);
        if(v==3)
        for(int i=1;i<=kk;++i)cout<<m[p][i]<<" ";
        else if(v==2)cout<<kk;
    }
    return 0;
}
