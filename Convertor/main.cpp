#include <iostream>
#include <cstring>
using namespace std;
char s[100];
int converse(char s[100], int lung)
{
    int nr = 0;
    for (int i = 1; i <= lung; ++i)
    {
        if (s[i] >= 'A')
            nr = nr * 16 + s[i] - 'A' + 10;
        else
            nr = nr * 16 + s[i] - '0';
    }
    return nr;
}
int main()
{
    cin >> s;
    cout << converse(s, strlen(s));
    return 0;
}

/*
#include <iostream>
#include <cstring>
using namespace std;
char s[100];
int nr;
int converse(char s[100],int lung)
{
    if(lung==0)return 0;
    if(s[lung]>='A')
        return converse(s,lung-1)*16 + s[lung]-'A'+10;
        else
        return converse(s,lung-1)*16+(s[lung]-'0');
}
int main()
{
    cin>>s;
    cout<<converse(s,strlen(s));
    return 0;
}
*/
