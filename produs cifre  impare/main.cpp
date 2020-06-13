#include <iostream>
#include <string.h>
using namespace std;
int fr[4];
int main()
{
    char n[34];
    int c1,c2;
    cin.getline(n,33,' ');
    cin>>c1>>c2;
    for(int i=strlen(n)-1;i>=0;--i){
        int a=n[i]-'0';
        if(a==c1)n[i]=c2+'0';
    }
    for(int i=0;i<strlen(n);++i)
        cout<<n[i];
    return 0;
}
