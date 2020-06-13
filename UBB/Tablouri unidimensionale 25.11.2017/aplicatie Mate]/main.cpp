#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");
bool ok;
int main()
{
    long n,m,an[10000],am[10000];
    fin>>n>>m;
    for(int i=1;i<=n;++i)fin>>an[i];
        for(int i=1;i<=m;++i)fin>>am[i];
        an[0]=-1;
        am[0]=-1;
        while(m>0 && n>0)
        {
            if(am[m]%2!=0)m--;
            if(an[n]%2!=0)n--;
            if(am[m]==an[n] && am[m]%2==0)cout<<am[m]<<" ",m--,n--,ok=1;
            else
            if(am[m]>an[n] && am[m]%2==0 )cout<<am[m]<<" ",m--,ok=1;
            else
            if(am[m]<an[n] && an[n]%2==0 )cout<<an[n]<<" ",n--,ok=1;
        }
        if(!ok)cout<<"nu exista\n";
    return 0;
}
