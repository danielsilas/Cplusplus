#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100);
    bool ok = true;
    int i;
    for (i = 0; i < strlen(s); i++)
        if (!isalpha(s[i]) && s[i] != ' ')
            ok = false;
    if (ok == true)
        cout << "Da";
    else
        cout << "Nu";
}
