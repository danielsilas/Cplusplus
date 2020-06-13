#include <iostream>
#include <string.h>
using namespace std;
int fr[10];
int main()
{
    char s[100];
    cin.getline(s,100);
    int i;
    for(i=0;i<strlen(s);++i)
        if(isdigit(s[i]))
    {
        int cifra = s[i]- '0';
        fr[cifra]++;
    }
    int cif_max=-1;
    for(int i=0;i<=9;++i)
        if(fr[i]>cif_max)cif_max=fr[i];
    cout<<cif_max;
    return 0;
}
