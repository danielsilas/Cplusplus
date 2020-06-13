#include <iostream>

using namespace std;

int main()
{
    int n,m=1,i,a[100][100],j,k=0;
    while(cin>>n)
    {
        k++;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                a[i][j]=i;m++;
            }
        }
        cout<<"Caso "<<k<<": ";
        if(n==0)cout<< m << " numero\n";
        else cout<< m << " numeros\n";
        cout<<0<<" ";
        for(i=1;i<=n;i++)
        {

            for(j=1;j<=i;j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
        m=1;
    }
    return 0;
}
