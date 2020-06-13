#include <iostream>

using namespace std;

int main()
{
    int n,i,k;
    bool ok=0;
    cin>>n>>k;
    for(int i=1;i<=n-k*k;++i)
            if(n==i*k+k*(k+1)/2){
                ok=1;
                break;
            }
    if(ok)cout<<"DA";
    else cout<<"NU";
    return 0;
}
