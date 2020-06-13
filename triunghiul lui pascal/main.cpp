#include <iostream>
using namespace std;
int main(){
    int b;
    cin>>b;
    int a[100][100];
    a[1][1]=1;
    for(int i=2;i<=b;++i){
        for(int j=1;j<=i;++j)
            a[i][j]=a[i-1][j]+a[i-1][j-1],cout<<a[i][j]<<" ";
            cout<<"\n";}


}
