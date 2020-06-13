#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n,m,a[51][51],i,j;
    int minim_de_pe_prima_col=INT_MAX;
    int minim_de_pe_a_doua_col=INT_MAX;
    int indice1; //indicele liniei primului minim
    int indice2; //indicele liniei celui de-al doilea minim
    cin>>n>>m;
    for(i=1; i <= n; ++i)
        for(j=1; j <= m; ++j)
            cin>>a[i][j];   //citirea
    for(i=1; i<=n; ++i)
    if(a[i][1]<minim_de_pe_prima_col)//determinarea minimului de pe prima coloana
    {
        minim_de_pe_prima_col=a[i][1];
        indice1=i;
    }
    for(i=1; i<=n; ++i)
    if(a[i][m]<minim_de_pe_a_doua_col)//determinarea minimului de pe ultima coloana
    {
        minim_de_pe_a_doua_col=a[i][m];
        indice2=i;

    }

    swap(a[indice1][1],a[indice2][m]);
    for(i=1; i <= n; ++i){
        for(j=1; j <= m; ++j)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
}
/*
4 3
7 5 19
3 8 4
23 6 1
10 2 9
*/
