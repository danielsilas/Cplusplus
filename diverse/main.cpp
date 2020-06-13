#include <iostream>
#include <string.h>
using namespace std;
bool pal(int n){
    int m=n,ans=0;
    while(n){
        ans=ans*10+n%10;
        n/=10;
    }
    if(m==ans)return 1;
    else return 0;
}
int main(){
	int a,b,k=0;
	cin>>a>>b;
	for(int i=min(a,b);i<=max(a,b);++i){
        if(pal(i))k++;
	}
	cout<<k;
}
