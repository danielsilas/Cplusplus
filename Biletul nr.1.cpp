#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.in");
int is_term(int n){
    int a=1,b=1,c=2;
    if(n==1)return 1;
    if(n==2)return 2;
    while(a+b<=n){
        a=b;
        b=c;
        c=a+b;
    }
    return b;
}
void next_fibo(int n)
{
    while (n)
    {
        int j=is_term(n);
        cout<<j<<" ";
        n-=j;
    }
}
int main()
{
    int n;
    fin>>n;
        next_fibo(n);
    return 0;
}
