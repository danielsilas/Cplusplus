/*
Enunț
Să se scrie un subprogram care să afișeze perechile de numere naturale „prietene” dintr-un
interval dat [a,b], a, b – numere naturale, a < b. Două numere naturale x şi y sunt „prietene”
dacă suma divizorilor lui x este egală cu suma divizorilor lui y. Pentru un număr, se vor considera
toți divizorii, inclusiv 1 și numărul însuși.
Analiză
Vom scrie un subprogram care verifică daca x si y din [a,b] au aceeași sumă s a divizorilor.
Avem nevoie şi de un subprogram care determină suma divizorilor. Vom realiza acest subprogram cu cea
mai bună complexitate, adică O(sqrt(n)).
*/
#include <iostream>

int suma_divizorilor_in_mod_ef(int n){
    int s=0;
    for(int i=1;i*i<=n;++i)
        if(n%i==0){s+=i;if(n/i>i)s+=n/i;}
    return s;
}

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<b;++i)
        for(int j=i+1;j<=b;++j)
    if(suma_divizorilor_in_mod_ef(i)==suma_divizorilor_in_mod_ef(j))
        cout<<i<<" "<<j<<endl;
    return 0;
}
