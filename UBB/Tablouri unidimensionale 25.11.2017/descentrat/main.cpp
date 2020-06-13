#include <iostream>
#include <string.h>
using namespace std;
struct orama{
        int lungime;
        int pozitia_centrului;
    };
    int s,l,k=1;
    bool ok;
    char a[100];
int main()
{
    cin.getline(a,100);
    orama cuvant[100];
    a[strlen(a)+1]='z';
    a[strlen(a)]=' ';
    for(int i=0;i<strlen(a);++i){
        if(a[i]!=' ')
            l++;
        else
        {
            cuvant[k].lungime=l;
            cuvant[k].pozitia_centrului=s+(l/2)+1;
            k++;
            s+=l+1;
            l=0;
        }
    }
    k--;
    for(int i=1;i<=k;++i)
        for(int j=1;j<=k;++j)
        if(cuvant[i].lungime == cuvant[j].lungime+1)
            if(cuvant[i].lungime%2==0){
                int widt=cuvant[i].pozitia_centrului-1;
                int wid=cuvant[j].pozitia_centrului-1;
                if(a[widt]==a[widt-1] && a[wid]==a[widt])
                {
                    ok=1;
                    break;
                }
            }
    if(ok)cout<<"DA";
    else cout<<"NU\n";
    return 0;
}
