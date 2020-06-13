#include <iostream>

using namespace std;

void Turnuri(int n,int &nrTurnuri,int &nrMonede)
{
    nrTurnuri=1;
    nrMonede=n;
    int doi=2;
    for(int i=n-1;i>=1;--i)
    {
        nrTurnuri+=doi;
        nrMonede+=i*doi;
        doi*=2;
    }
}
int main()
{
    int n,a,b;
    cin>>n;
    Turnuri(n,a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
