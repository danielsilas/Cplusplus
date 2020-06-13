#include <iostream>

using namespace std;
int prod(int n){
    int p=1;
    while(n){
        p*=n%10;
        n/=10;
    }
    return p;
}
int zero(int n){
    while(n){
        if(n%10==0)return 1;
        n/=10;
    }
    return 0;
}
int main()
{
    /*int p=0;
    /for(int i=1;i<=9;++i)
    for(int j=0;j<=9;++j){
            for(int k=0;k<=8;k+=2)
                cout<<i*100+j*10+k<<" ",p++;
                cout<<endl;}
    cout<<p<<endl;*/
    int l=0;
    for(int i=100;i<=999;++i)
        if(zero(i))cout<<i<<endl,l++;
    cout<<l-9;
    return 0;
}
