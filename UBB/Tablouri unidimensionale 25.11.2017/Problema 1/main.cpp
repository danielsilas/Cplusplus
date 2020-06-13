#include <iostream>
#include <math.h>
/*
Enunț
Twin primes. Se citesc mai multe numere naturale, până la introducerea numărului 0 și se
memorează într-un șir. Să se găsească toate perechile de numere prime gemene distincte care se regăsesc
în șirul dat. Un număr prim p este considerat prim geamăn (twin prime) dacă p+2 sau p-2 este de asemenea
prim. De exemplu {3,5}, {5,7} și {11,13} sunt perechi de numere prime gemene.
*/
using namespace std;
void citire(int a[],int &n);
bool prim(int n);
bool distinct(int x,int y,int rez[],int m);
void determinaSirPerechi(int a[],int n,int rez[],int &m);
void afisare(int rez[],int m);

int main()
{
    int a[1000], rez[1000], n, m;
    citire(a,n);
    determinaSirPerechi(a,n,rez,m);
    afisare(rez,m);
    return 0;
}
void citire(int a[],int &n){
    int nr;
    n=0;
    cin>>nr;
    while(nr>0){
        a[++n]=nr;
        cin>>nr;
    }
}
bool prim(int p){
 if (p <= 1)
 return false;
 if (p == 2 || p == 3)
 return true;
 int i = 2;
 while (i <= sqrt(p)) {
 if (p % i == 0)
 return false;
 i++;
 }
 return true;
}

bool distinct(int x,int y,int rez[],int m){
    for(int i=0;i<m-1;i+=2)
        if((rez[i+1]==x && rez[i]==y) || (rez[i]==x && rez[i+1]==y))return 0;
    return 1;
}
void determinaSirPerechi(int a[],int n,int rez[],int &m){
    m=0;
    for(int i=0;i<n;++i){
        if(prim(a[i])){
            for(int j=i+1;j<n;++j)
            if(prim(a[j]) && (a[i]==a[j]+2 || a[i]==a[j]-2) && distinct(a[i],a[j],rez,m)){
                rez[m++]=a[i] < a[j] ? a[i] : a[j];
                rez[m++]=a[j] > a[j] ? a[i] : a[j];
            }
        }
    }
}
void afisare(int a[],int n){
     if (n == 0) {
    cout << "Nu s-a gasit nici o pereche!" << endl;
    }
    else {
    for (int i = 0; i < n - 1; i += 2) {
    cout << '{' << a[i] << ',' << a[i + 1] << "} ";
    }
    cout << endl;
    }
}
