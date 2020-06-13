#include <iostream>
#include <cstring>
using namespace std;
int calculCuCaractere(char s[100],int n,int p, int q, int nr)
{
    if(p==q)return 0;
    else if(s[n-q]>='0'&&s[n-q+1]<='9')
        return 10*calculCuCaractere(s,n,p,q-1,nr)+s[n-q]-'0';
        else return calculCuCaractere(s,n,p+1,q,nr);
}
int main()
{
    char s[100];
    cin>>s;
    cout<<s<<endl;
    int n=strlen(s);
    --n;
    int p=1,q=n,nr=0;
    cout<<"suma ceruta este :"<<calculCuCaractere(s,n,p,q,nr);
    return 0;
}
