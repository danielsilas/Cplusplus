#include <iostream>
using namespace std;
int main()
{
 long s,v;
    int cont=0;
cin>>s>>v;
while(v>0)
{
    cont++;
    v-=s;
}
    cout<<cont;
return 0;
}
