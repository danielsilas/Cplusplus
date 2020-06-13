#include <fstream>
#include <math.h>
using namespace std;
ifstream cin("numere18.in");
ofstream cout("numere18.out");

int main()
{
    int n,m,c;
    cin>>c;
    if(c==1){
            cin>>n;
        int a[1000];
        a[1]=1;
        int k=1,i=2;
        while(i<=n){
            a[i]=a[k]+k;
            i++,k++;
        }
        int s=0;
        for(int i=1;i<=k;i++){
            s+=a[n]++;
        }
        cout<<s<<endl;
    }
    else
    {
        cin>>m;
        if(m==1)cout<<1<<" "<<1<<endl;
        int a=1,b=1;
        for(int i=2;i<=m;++i){
            a=b+1;
            b=b+i;
            if(m>=a && m<=b){
                int k=0,po;
                for(int j=a;j<=b;++j){
                        k++;
                    if(j==m)break;
                }
            cout<<i<<" "<<k<<endl;
            break;
            }
        }
    }
    return 0;
}
