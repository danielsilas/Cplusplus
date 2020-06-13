#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int p;cout<<"Problema ";cin>>p;
    if (p==84)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)cout<<a/b<<" "<<a%b<<endl;
        else if(b>a)cout<<b/a<<" "<<b%a<<endl;
        else cout<<"EROARE\n";
    }
    if (p==85)
    {
        double a,b,c;
        cin>>a>>b>>c;
        if(a*a==b*c || b*b==a*c || c*c==a*b)cout<<"DA";
        else cout<<"NU";
    }
    if (p==86)
    {
        int n;
        bool ok=true;
        cin>>n;
        short u = n%10;
        n/=10;
        while(n){
            short p=n%10;
            if(p!=u){ok=false;break;}
            n/=10;
        }
        if(ok)cout<<"DA";
        else cout<<"NU";
    }
    if (p==87)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && b<c)cout<<1;
        if(a>b && b>c)cout<<2;
        if(a<b && b>c)cout<<3;
        if(a>b && b<c)cout<<4;
    }
    if (p==88)
    {
        int n;
        cin>>n;
        double r=0;
        for(int i=1;i<=n;++i)
            if(i%2!=0)r+=sqrt(i);
            else r-=sqrt(i);
        cout<<setprecision(5)<<r;
    }
    if (p==89)
    {
        double a;
        cin>>a;
        cout<<floor(a)<<" "<<(int)a+1;
    }
    if (p==90)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;++i)cout<<i*10<<" ";
    }
    if (p==91)
    {
        unsigned int a,d,u;
        cin>>a;
        d=a%10*(a%10);
        u=a%10;
        for(int i=1;i<=2017;++i){
            d=d*u;
            d=d%10;
        }
        cout<<d;
    }
    if (p==92)
    {
        int x,a[100];
        a[1]=1;cin>>x;cout<<1<<" "<<1<<endl;
        for(int i=2;i<=x;++i){
            if(i%2==0)a[i]=2*a[i/2]+3;
            else a[i]=2*a[i/2];
            cout<<a[i]<<" "<<i<<endl;
        }
    }
    return 0;
}
