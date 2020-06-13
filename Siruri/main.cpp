#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s,100);
    int n=strlen(s),i=0;
    while(i!=n){
        if(strchr("0123456789",s[i]))
            strcpy(s+i,s+i+1),n--;
            else cout<<s[i],++i;
    }
    return 0;
}
