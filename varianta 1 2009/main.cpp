#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream din("BAC.TXT");
    int x,h,kmax=-1,k=0,l;
    while(din>>x)
    {
        if(x%2==0)
            k++;
            if(x%2!=0)
        {
            if(k>kmax)kmax=k,l=1;
            else if(k==kmax)l++;
            k=0;
        }
    }
    if(k==kmax)l++;
    cout<<l<<endl;
    return 0;
}
