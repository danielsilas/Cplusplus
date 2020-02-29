# include<iostream>
# include<fstream>
using namespace std;
int n, a[100];
void citire(int &n,int a[100])//referinta la n
{ifstream f("numere.in");
f>>n;
for(int i=1;i<=n;i++)f>>a[i];
}

int termen(int n,int a[100])
{int nr=0,aux;
for(int i=1;i<=n;i++) nr=nr*10+a[i];
aux=a[n];
for(int i=n;i>1;i--) a[i]=a[i-1];
a[1]=aux;
return nr;}


int suma(int n,int a[100])
{int s=0;
 for(int i=1;i<=n;i++) {s+=termen(n,a);}
 return s;}


int main()
{citire(n,a);
 cout<<suma(n,a);
 return 0;
}
