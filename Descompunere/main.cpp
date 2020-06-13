#include <iostream>
using namespace std;
int sub(int n)
{
    int divizor=2,numarul_divizorilor=0;
    bool ok=false;
    while(n>1)
    {
        while(n%divizor==0)
        {
            n=n/divizor;
            ok=true;
        }
        if(ok==true)
            numarul_divizorilor++;
        ok=false;
        divizor ++;
    }
    return numarul_divizorilor;
}
int main()
{
    int n;
    cin>>n;
    cout<<sub(n);
    return 0;
}
