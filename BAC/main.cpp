#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int a,b,c,d,secv,secvbest;
    fin>>a>>b>>c;
    if(a!=b && b!=c)secv=3,secvbest=3;
    else if((a==b && b!=c) || (a==c && b!=a))secv=2,secvbest=2;
    else secv=1,secvbest=1;
    cout<<a<<" "<<b<<" "<<c<<", ";
    while(fin>>d)
    {
        if(secv = 1 && d!=c)secv++;
        else
        if(d!=b && d!=c)secv++;
        else {

        if(secv>secvbest)secvbest=secv;
        if(d==c)secv==1;
        else if(d==b)secv=2;
        }
        a=b,b=c,c=d;
        cout<<a<<" "<<b<<" "<<c<<", ";
    }
    cout<<endl<<secvbest;
    return 0;
}
