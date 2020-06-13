#include <iostream>
#include <climits>
using namespace std;

int i,j,n,m,a[100][100];
void citire()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
}
void afisare()
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
void minim()
{
    int m1n=INT_MAX;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        if(a[i][j]<m1n)m1n=a[i][j];
    cout<<"Cel mai mic element din matrice este "<<m1n<<'\n';
}
void maxim()
{
    int m4x=INT_MIN;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        if(a[i][j]>m4x)m4x=a[i][j];
    cout<<"Cel mai mare element din matrice este "<<m4x<<'\n';
}
void suma_de_pe_linia_l()
{
    int l,s=0;
    cout<<"Alege un numar de la 1 la "<<m<< ": ";
    cin>>l;
    for(i=1;i<=m;i++)s+=a[l][i];
    cout<<"Suma de pe linia "<< l << " = "<<s<<endl;
}
int main()
{
    citire();
    afisare();
    minim();
    maxim();
    suma_de_pe_linia_l();
    return 0;
}
