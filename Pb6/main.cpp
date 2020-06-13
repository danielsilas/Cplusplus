#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s,100);
    char *p;
    p=strtok(s," ");
    int j=strlen(s);
    while(p!=NULL)
    {
        if(strchr("aeiou",p[0]))cout<<p<<" ";
        p= strtok(s," ")j    ;
    }
    return 0;
}
