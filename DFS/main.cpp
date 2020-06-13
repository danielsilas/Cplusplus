#include<iostream>
 #include <conio.h>
using namespace std;
  int s[20],a[20][20],n,L,i,j;
   void afisare_drum() {
       int i;
        for(i=1;i<=n;i++)
            cout<<s[i]<<" ";}
        void generare_drum()
        {int i,j,k,p,q;
         if(a[1][2]==1)
            {s[1]=1;s[2]=2;}
         else{s[1]=2;s[2]=1;} L=2;
          for(k=3;k<=n;k++)
            {if(a[k][s[1]]==1)
            p=1; else{i=1;q=0;
          while(i<L&&!q)
            if(a[s[i]][k]==1&&a[k][s[i+1]]==1)
             q=1; else i++;
          p=i+1;} for(j=L;j>=p;j--) s[j+1]=s[j];
          s[p]=k; L++;} cout<<endl;}
           int main() {
                 cout<<"n=";cin>>n;
                   for(i=1;i<=n-1;i++)
                        for(j=i+1;j<=n;j++)
                        {

cout<<"exista arcul ("<<i<<","<<j<<")?[1/0]";
 do{  cin>>a[i][j];  }
 while(!(a[i][j]==0 || a[i][j]==1));
 a[j][i]=1-a[i][j];}  generare_drum();
afisare_drum();
getch();}
