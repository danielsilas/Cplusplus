#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"The number must be in [0,255] ";
    cin>>n;
    int o=7;
    int s=0;
    while(o>=0)
    {
        int p=pow(2,o);
        if(n-p>=0)n-=p,cout<<1<<" ",s++;
        else cout<<0<<" ";
        --o;
    }
    cout<<"The sum is : "<<s<<endl;
    return 0;
}
