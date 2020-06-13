#include <iostream>
#include<fstream>
using namespace std;
int fr[100];
int main()
{
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    int x,maxim=-1, p;
    while(fin>>x)
    {
        fr[x]++;
    }
    for(int i=1;i<=99;i++)
    if(fr[i])
    {
        if(fr[i]>maxim)
        maxim=fr[i],p=i;
    }
    fout<<p;
    return 0;
}
