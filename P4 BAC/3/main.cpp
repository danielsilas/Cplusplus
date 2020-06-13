#include <iostream>

using namespace std;
int fr[10];
int sub(int a,int b){
    while (a>1){
        fr[a%10]++;
        a/=10;
    }
    return fr[b];
}
int main()
{
    int n,b;
    cin>>n>>b;
    sub(n,b);
    bool ok = 1;
    for(int i=0;i<=9;++i)if(fr[i]%2!=0)ok=0;
    if(ok){
        for(int i=9;i>=0;--i)
            for(int j=1;j<=fr[i]/2;++j)
                cout<<i;
        for(int i=0;i<=9;++i)
            for(int j=1;j<=fr[i]/2;++j)
                    cout<<i;
    }
    else cout<<0;
    return 0;
}
