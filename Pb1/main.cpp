#include <iostream>

using namespace std;
int suma_cifre(int n)
{
    int s=0;
    while(n)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    int v[100],n,sum_max=-1;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>v[i];
        int s=suma_cifre(v[i]);
        if(s>sum_max)sum_max=s;
    }
    cout<<sum_max;
    return 0;
}
