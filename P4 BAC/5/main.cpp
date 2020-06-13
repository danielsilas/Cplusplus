#include <iostream>
#include <algorithm>
using namespace std;

int first(int n){
    int d=2;
    while(n>1){
        if(n%d==0){return d;break;}
        else d++;
    }
}
int main()
{
    int n,a[100],v[100],j=0;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        int m=a[i];
        int d=first(a[i]),knt=0;
        while(a[i]>1){
                knt++;
            a[i]/=d;
            d=first(a[i]);
        }
        if(knt==1)j++,v[j]=m;
    }
    sort(v+1,v+j+1);
    if(!j)cout<<"NU EXISTA";
    else {
        for(int i=1;i<=j;++i)
            cout<<v[i]<<" ";
    }

    return 0;
}
