#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int ogl(int n){
    int ans=0;
    while(n){
    	ans=ans*10+n%10;
        n/=10;
    }
    return ans;
}
int main(){
	int n,x,y,difmin=INT_MAX,p;
    cin>>n;
    for(int i=1;i<=n;++i){
    cin>>x;
    y=ogl(x);
    int difa=abs(x-y);
       if(difa<difmin)difmin=difa,p=x;
       else if(difa==difmin)p=x;
    }
    cout<<p;
}
