#include <iostream>
using namespace std;
int main()
{
    long a,b,c,x,cifre=1;
    cin>>a>>b>>c>>x;
    long aux=x;
    while(aux>9)aux/=10,cifre++;
    cout<<aux<<" "<<cifre<<" "<<x%10<<endl;
    bool ok=1;
    if(cifre!=a)ok=0;
    if(b!=aux)ok=0;
    if(c!=x%10)ok=0;
    if(ok)cout<<"DA";
    else cout<<"NU";
}
