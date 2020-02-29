#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
int fr[100];
int main()
{
    int x;
    while(fin>>x)fr[x]++;
    int maxp=-1,p;
    for(int i=1;i<=99;++i)
        if(fr[i] && fr[i]>maxp)maxp=fr[i],p=i;
    cout<<p;
    return 0;
}
