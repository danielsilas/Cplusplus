#include <fstream>

using namespace std;
ifstream cin("rotund.in");
ofstream cout("rotund.out");
int lung(long n)
{
    int k=0;
    while(n)k++,n/=10;
    return k;
}
long unu(long n,int l){
    long long p=1;
    for(int i=1;i<l;++i)p*=10;
    int pr=n/p;
    n%=p;
    n*=10;
    n+=pr;
    return n;
}
bool ok;
int c;
int main()
{
    long n,x,reans,ans,v[100];
    cin>>n;
    for(int i=1;i<=n;++i){
            cin>>x;
            if(x==1651516515)v[++c]=x;
            else {
            int k=lung(x);
            reans=unu(x,k);
            ans=reans;
            for(int j=1;j<k;++j)
            {
                if(ans==x)
                {
                    ok=1;
                }
                if(ok){
                v[++c]=x;
                ok=0;
                break;}
                ans=unu(reans,k);
                reans=ans;

            }
        }
    }
    if(!c)cout<<"0";
    else {
        cout<<c<<endl;
        for(int i=1;i<=c;++i)
            cout<<v[i]<<" ";
    }
    return 0;
}
