#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int n,m,l[]={2,5,10,20,50,100};
    bool ok[6];
    while(cin>>n>>m)
    {
        int x=n,y=m;
            for(int i=5;x%l[i]!=0 && i>=0;--i)

            {
                if(x%l[i]){
                x%=l[i];
                cout<<x<<endl;
                }

            }

    }
    return 0;
}
