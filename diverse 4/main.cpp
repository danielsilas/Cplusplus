#include <fstream>
using namespace std;
ifstream cin("palindromsd.in");
ofstream cout("palindromsd.out");
bool palin(int n){
    int ans=0,m=n;
    while(n){
        ans=ans*10+n%10;
        n/=10;
    }
    if(ans==m)return 1;
    else return 0;
}
int main(){
 	int x,k=0,a[1001];
 	while(cin>>x)
        if(palin(x)){
            k++;
            a[k]=x;
        }
if(k%2==0)
    for(int i=1;i<=k/2;++i)
        cout<<a[i]<<" "<<a[k-i+1]<<endl;
else {
    for(int i=1;i<=k/2;++i){

        cout<<a[i]<<endl;
        cout<<a[k-i+1]<<endl;
        if(i==k/2/2)cout<<a[k/2+1]<<endl;
    }
}
}
