#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<=255;++i)
        cout<<i<<" "<<(char)i<<'\0';
    return 0;
}

