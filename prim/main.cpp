#include <iostream>

using namespace std;

bool prime(int p)
{
    if(p==1)return 0;
    if(p<=3)return 1;
    if(p%2==0 || p%3==0)return 0;
    int i=5;
    while(i*i<p)
{
    if(p%i==0 || p%(i+2)==0)return 0;
    i+=6;
}
    return 1;
}
int main() {

    unsigned long long n;
    int t,l=0;
    cin>>t;
    while(t-->1){
     if(prime(t))cout<<t<<" Prime\n",++l;
    }
    cout<<l<<" primes";
    return 0;
}
