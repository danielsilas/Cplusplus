#include <iostream>
#include <algorithm>
using namespace std;

int sub(int n,int v[100], int a);
bool cmp(int a,int b){
    return a>b;
}
int main()
{
    int n,v[100],k=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>v[i];
    sort(v+1,v+1+n,cmp);
    for(int i=1;i<=n;++i){
        if(sub(n,v,v[i])==n-i)
            k++;
    }
            cout<<k<<endl;
    if(k==n)cout<<"DA";
    else cout<<"NU";
    return 0;
}
int sub(int n,int v[100],int a){
    int k=0;
    for(int i=1;i<=n;++i)
        if(v[i]<a)k++;
    return k;
}
