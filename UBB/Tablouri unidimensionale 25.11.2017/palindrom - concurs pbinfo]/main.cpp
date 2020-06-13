#include <stdio.h>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("pal.in");
ofstream cout("pal.out");
bool palin(long n){
    long long ans=0;
    while(n){ans=ans*10+n%10;n/=10;}
    return ans;
}
long long x;
int cerinta,n;
long long next_pal(long long n){
    int k=0,kc,super;
    long long prima=n,doi=n,d=1,an=n,pprima;
    while(n){
        k++;
        n/=10;
    }
    if(k%2==0)kc=k/2;
    else kc=k/2+1;
    for(;kc;kc--)d*=10;
    if(kc%2!=0)doi%=(d/10);
    else doi%=d;
    prima=prima/d;
    pprima=palin(prima);
    /*if(pprima>doi){
        return prima*d+an%super/d;
    }
    else return prima*d+an/super*/
    cout<<prima<<" "<<doi<<" "<<pprima<<endl;
}
void citire(){
    cin>>cerinta>>n;
}

int main()
{
    citire();
    if(cerinta==1)
    {
        for(;n;n--)
        {
            cin>>x;
            cout<<next_pal(x)<<" ";
        }
    }

    return 0;
}
