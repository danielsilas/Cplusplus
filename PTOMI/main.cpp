#include <iostream>

using namespace std;
void sub(int n)
{
    int d=1,x,y,z,dp;
    while(d<=n/2){
    if(n%d==0)
    {
        y=d;
        dp=n/d;//4
        for(int i=0;i<=dp,(dp-i)>=i;++i)
        {
            x=i;
            z=dp-i;
            if(n==y*(x+z) && x<y && y<z)
                cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    ++d;
    }
}

int main()
{
    int n;
    cin>>n;
    sub(n);
    return 0;
}
