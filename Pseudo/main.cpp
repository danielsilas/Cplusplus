#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int z, x, y;
    cin>>z>>x;
    x=abs(x);
    y=abs(y);
    do
    {
        y=x;
        x=(x+z/x)/2;
    } while (x==y);

    cout<<x;
    return 0;
}
