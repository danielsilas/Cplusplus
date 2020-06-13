#include <iostream>

using namespace std;

int main()
{
    int e1,e2,e3;
    cin>>e1>>e2>>e3;
    int E1,E2,E3,E4,E5,E6;
    E1=e1*100+e2*10+e3;
    E2=e1*100+e3*10+e2;
    E3=e2*100+e1*10+e3;
    E4=e2*100+e3*10+e1;
    E5=e3*100+e1*10+e2;
    E6=e3*100+e2*10+e1;
    int v[7];
    v[1]=E1;
    v[2]=E2;
    v[3]=E3;
    v[4]=E4;
    v[5]=E5;
    v[6]=E6;
    int max_par=-1;
    bool ok=0;
    int c=0;
    for(int i=1;i<=6;++i)
    {
        if(v[i]%2==0 && v[i]>=100 && v[i]<=999)
        {
            ok=1;
            c++;
            if(v[i]>max_par)max_par=v[i];
        }
    }
    if(ok)
        cout<<c<<" "<<max_par<<'\n';

    else cout<<"Poate data viitoare!\n";
    return 0;
}
