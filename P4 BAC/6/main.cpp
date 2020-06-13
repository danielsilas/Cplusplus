#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("BAC.TXT");
unsigned long long  fr[99999999];
int main()
{
    int x;
    while(fin>>x)
            fr[x]++;

    for(int i=0;i<=99999998;++i)
        if(fr[i]>0)
            cout<<i<<" "<<fr[i]<<" ";
    return 0;
}
