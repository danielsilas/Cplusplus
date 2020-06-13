#include <fstream>
#include <iostream>
using namespace std;
//ifstream cin("cifre006.in");
//ofstream cout("cifre006.out");
int v[100];
int main()
{
    long n,k,nrk=0,p=0;
    cin>>n>>k;
    while(n)
    {
        short last=n%10;
        if(last==k)nrk++;
        else
        v[++p]=last;
        n/=10;
    }
    cout<<nrk<<" ";
    long nr_meu=0;
    for(int i=1;i<=nrk;++i)
        nr_meu=nr_meu*10+k;

    while(v[p]==0)--p;
    for(int i=p;i>=1;i--)
        nr_meu=nr_meu*10+v[i];
    cout<<nr_meu;

}
