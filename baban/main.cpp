#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[10001];
    cin.getline(s, 10000);

    for (int i = 0; i < strlen(s); ++i)
        if (s[i] != ',')
            cout << s[i];
        else
            cout << endl;
    cout << endl;

    return 0;
}
