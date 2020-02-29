#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.in");
int main()
{
    int n,x,s=0;
    fin>>n;
    int digits[100];
    for(int i=1;i<=n;++i)
    {
        fin>>x;
        s+=x;
    }
    digits[1]=s%10;
    int z,y;
    z=s;
    for(int i=2;i<n;++i)
    {

        y=s;
        y+=z/10;
        digits[i]=y%10;
        z=y;
    }
    digits[n]=z;
    for(int i=n;i>=1;--i)cout<<digits[i];
    return 0;
}
