#include <bits/stdc++.h>
using namespace std;
int n,k,i,trep[200000],j;
int main()
{cin>>n>>k;
trep[1]=1;
for(i=2;i<=n;i++)
{ if(i<=k) {for(j=i-1;j>0;j--) trep[i]+=trep[j]; trep[i]%=9001;}
else { for(j=i-1;j>=i-k;j--) trep[i]+=trep[j]; trep[i]%=9001; } } cout<<trep[n]%9001; return 0; }
