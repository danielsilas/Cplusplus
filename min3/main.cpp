#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    char c;
	cin>>c;
    if(c=='+')
        cout<<a+b;
    else if(c=='-')
        cout<<max(a,b)-min(a,b);
    else if(c=='*')
        cout<<a*b;
    else if(c=='/')
        cout<<max(a,b)/min(a,b);
}
