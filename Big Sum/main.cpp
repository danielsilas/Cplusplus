#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[1001];
    char s2[1001];
    int v1[1001],v2[1001],v3[1001];
    cin.getline(s1,1000);
    cin.getline(s2,1000);
    int l1=strlen(s1);
    int l2=strlen(s2);

    for(int i=l1-1;i>=0;--i)v1[i]=s1[i]-'0';
    for(int i=l2-1;i>=0;--i)v2[i]=s2[i]-'0';

    int lim=max(l1,l2),k;
    for(int i=lim-1;i>=0;--i){
        int x=v1[i]+v2[i];
        if(x>9){
            v3[i]==x%10;
            v3[i-1]++;k=i-1;
        }
        else v3[i]=x;
    }
        int sop=0;
        for(int i=min(sop,k);i<lim;++i)cout<<v3[i]<<" ";
    return 0;
}
