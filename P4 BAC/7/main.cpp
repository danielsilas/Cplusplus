#include <iostream>

using namespace std;

int rec(int n){
    if(n<=5)return n;
    else if(n>5) return 2*rec(n-1);
}
int main()
{
    int n;
    for(int i=1;i<=20;++i)
    cout<<rec(i)<<" ";
    return 0;
}
