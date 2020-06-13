#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double d1,d2;
    cin>>d1>>d2;
    double S=d1*d2/2;
    d1/=2;
    d2/=2;
    cout<<double(4*sqrt(d1*d1+d2*d2))<<" "<<S;
    return 0;
}
