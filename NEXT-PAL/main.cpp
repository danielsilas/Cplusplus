#include <iostream>
#include <algorithm>
using namespace std;

int avem_cifre(long n);
void next_p(long &n);
int vreau_binar(int n,int v[100],int start,int finish);
int main()
{
    int val,n,x,a[100],m[100][100];
    cin>>val;
    if(val==1)
    {
        cin>>n;
        for(int i=1;i<=n;++i)
        {
            cin>>x;
            cout<<next_p(x);
        }
    }
    else
    {
        cin>>n;
        for(int i=1;i<=n;++i)
        {
            cin>>x;
            a[i]=next_p(x);
        }
        sort(a+1,a+n+1);
        int l=1,c=0;
        for(int i=1;i<=n;++i)
        {
            int ans = a[i];
            while(ans)
            {
                if(vreau_binar(ans,a,1,n))
                {
                    m[l][++c] = ans;
                }
                ans%=pow(10,avem_cifre(ans));
                ans/=10;
                if(pt2>c)pt2=c;
            }
            l++;
            c=0;
        }
        if(val==2)
        {
            cout<<pt2;
        }
        else if(val==3)
        {
            for(int j=1;j<=pt2;++j)
            {
                cout<<m[pt2][i]<<" ";
            }
        }
    }
    return 0;
}
int avem_cifre(long n)
{
    int t=0;
    while(n)t++,n/=10;
    return t;
}
void next_p(long &n);
int vreau_binar(int n,int v[100],int start,int finish);
