#include <iostream>
using namespace std;
long parimpar(long n){
    long rez=0,p=1;
    if(n%2==0){
        while(n){
                int u=n%10;
            if(u%2==0){
                rez+=p*u;
                p*=10;
            }
            n/=10;
        }
    }
    else {
        while(n){
                int u=n%10;
            if(u%2!=0){
                rez+=p*u;
                p*=10;
            }
            n/=10;
        }
    }
    return rez;
}
int main(){
	long a,b,c,d;
    cin>>a>>b;
    c=parimpar(a);
    d=parimpar(b);
    if(c>d)cout<<a;
    else if(c<d)cout<<b;
    else cout<<max(a,b);
}
