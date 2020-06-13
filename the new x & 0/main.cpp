#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

char a[3][3],p1[100],p2[100];
void afisare()
{

    char square=254,bar=222;
    cout<<"terenul de joc este :\n";
    for(int i=1; i<=3; ++i)
    {
        for(int j=1; j<=3; ++j)
            {
            cout<<setw(4);
            cout<<a[i][j]<<" ";
            }
        cout<<"\n\n";
    }

}
int main()
{
    cin.getline(p1,20,'\n');
    cin.getline(p2,20,'\n');
    bool buzz=0;
    for(int i=1; i<=3; ++i)
        for(int j=1; j<=3; ++j)
            a[i][j]='*';
    int k=0,iulia1,iulia2,nati1,nati2;
    k=9;
    afisare();
    while(k>0)
    {
        bool ok=1;
        --k;
        if(k%2==0)
        {
            cout<<"Este randul lui "<<p1<<endl;
            cin>>iulia1>>iulia2;
            if(a[iulia1][iulia2]=='*' && iulia1 > 0 && iulia2 > 0 && iulia1 < 4 && iulia2 < 4)
                a[iulia1][iulia2]='X';
            else
                cout<<"Mutare incompatibila!\n",++k,ok=0;

        }
        else
        {
            cout<<"Este randul lui "<<p2<<endl;
            cin>>nati1>>nati2;
            if(a[nati1][nati2]=='*' && nati1 > 0 && nati1 < 4 && nati2 > 0 && nati2 < 4)
                a[nati1][nati2]='O';
            else
                cout<<"Mutare incompatibila!\n",++k,ok=0;
        }
        if(ok)
        {
            afisare();
            int retin;
            ///vrificare pe linii, mai jos
            for(int i=1;i<=3;++i)
            {
                int p=1;
                for(int j=1;j<3;j++)
                    if(a[i][j]==a[i][j+1] && a[i][j]!='*')
                        p++;
                if(p==3)
                {
                    buzz=1;
                    retin=i;
                    break;
                }
            }
            if(buzz)
            {
                if(a[retin][retin]=='X')
                        cout<<p1<<" castiga!\n";
                    else cout<<p2<<" castiga!\n";
                break;
            }
            ///verificare pe coloane, mai jos
           for(int j=1;j<=3;++j)
            {
                int p=1;
                for(int i=1;i<3;i++)
                    if(a[i][j]==a[i+1][j] && a[i][j]!='*')
                        p++;
                if(p==3)
                {
                    retin=j;
                    buzz=1;
                    break;
                }
            }
            if(buzz)
            {
                if(a[retin][retin]=='X')
                        cout<<p1<<" castiga!\n";
                    else cout<<p2<<" castiga!\n";
                break;
            }
        }
        int d_sec=1,d_pri=1;
        for(int i=1;i<3;++i)
            {
            if(a[i][i]==a[i+1][i+1] && a[i][i]!='*')
                d_pri++;
            if(a[i][3-i+1]==a[i+1][3-i] && a[i][3-i+1]!='*')
                d_sec++;
            }
        if(d_sec==3 || d_pri==3)
        {
            buzz=1;
            if(a[2][2]=='X')
                        cout<<p1<<" castiga!\n";
                    else cout<<p2<<" castiga!\n";
            break;
        }
    }
    if(!buzz)cout<<"                 REMIZA !!";
    getch();
}
