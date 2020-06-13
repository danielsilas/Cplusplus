#include <iostream>

using namespace std;

int cmmdc(int a,int b);
int chenar(int L,int l){
    int nr,c=cmmdc(L,l);
    nr=L/c + l/c -2;
    return nr;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<chenar(a,b);
    return 0;
}
int cmmdc(int a,int b){
    if(a==b)return a;
    else if(a>b)return cmmdc(a-b,b);
    else return cmmdc(a,b-a);
}
