#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[50];
    cin.getline(s,50);
    int i;
    for(i=0;i<strlen(s);i++)
        if(!isdigit(s[i]))
        {
            strcpy(s+i,s+i+1);
            --i;
        }
    if(!strlen(s[i])cout<<"sir vid";
    else
    cout<<s;

    return 0;
}
