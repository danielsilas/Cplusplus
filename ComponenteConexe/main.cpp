#include<iostream>
#include<fstream>
#include <queue>
#include <vector>
using namespace std;
int v[100],ns,n,comp;
queue <int> q;
vector <int> a[100];
// citirea grafului din fisier text si construirea matricei de adiacenta
void citire()
{   ifstream f("graf.in");
    int x,y;
    f>>n;
    while(f>>x>>y){
        a[y].push_back(x);
        a[x].push_back(y);}
     f.close();
}
// returnează primului nod nevizitat
int exista_nod_nevizitat()
{   for(int i=1;i<=n;i++)
      if(v[i]==0)
         return i; // primul nod nevizitat
      return 0;   // nu mai exista noduri nevizitate
}
// parcurgerea în latime a unei componente conexe, plecând din nodul de start ns
void parcurgere_latime(int nod)
    {
        comp++;
        v[nod]=1;
        cout<<"Componenta conexa : "<<comp<<" este formata din nodurile :";
        q.push(nod);
        while(!q.empty()){
            int nod=q.front();
            cout<<nod<<" ";
            for(int i=0;i<a[nod].size();++i)
                if(!v[a[nod][i]]){
                q.push(a[nod][i]);
                v[a[nod][i]]=1;
            }
            q.pop();
        }
       cout<<endl;
    }
// functia principala main()
int main()
{
    citire();
  cout<<"Dati nodul de start : "; cin>>ns;

  parcurgere_latime(ns);
  while(exista_nod_nevizitat())
     {
        ns=exista_nod_nevizitat();
        parcurgere_latime(ns);  //parcurg o alta componenta conexa
      }

  cout<<"Graful este alcătuit din "<<comp <<" componente conexe. ";
return 0;
}
