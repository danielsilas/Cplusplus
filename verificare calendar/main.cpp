#include <iostream>

using namespace std;

int main()
{
    int zi,luna,an;
    bool ok=0;
    cin>>zi>>luna>>an;
    if(an%4==0 && !(an%400!=0 && an%100==0))ok=1;
    if(ok)
    {
        cout<<"An bisect\n";
        if(luna == 2 && zi <=29)
            cout<<"DA";
        else if((luna == 4 || luna == 6 || luna==9 || luna==11 )&& zi<=30)
            cout<<"DA";
        else if(zi<=31 && luna <= 12 && luna!=2)cout<<"DA";
        else cout<<"NU";
    }
    else
    {
        if(luna == 2 && zi <=28)
            cout<<"DA";
        else if((luna == 4 || luna == 6 || luna==9 || luna==11 )&& zi<=30)
            cout<<"DA";
        else if(zi<=31 && luna <=12&& luna!=2)cout<<"DA";
        else cout<<"NU";
    }
    return 0;
}
