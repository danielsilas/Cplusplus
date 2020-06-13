#include <iostream>
#include <algorithm>
using namespace std;
int a[19];
int main()
{
    long long n;
    cin>>n;
    int m=0;
    while(n){
        m++;
        a[m]=n%10;
        n/=10;
    }

    for(int i=m;i>=1;--i)
        if(a[i]%2==0){a[i]++;
            for(int j=i-1;j>=1;--j)a[j]=1;
            break;
        }
        long long ans=0;
    for(int i=m;i>=1;--i)
            ans=ans*10+a[i];
            cout<<ans;

    return 0;
}
