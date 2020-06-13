#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("bac.txt");
int ok;
int main()
{
    int x,a,b;
    fin>>a>>b;
    if(a>b)swap(a,b);
    while(fin>>x){
            if(a==0)cout<<x<<" "<<a<<" ",a=b,b=10;
    else
          if(x<a && x<b)cout<<x<<" ";
          else if(x>a && x<b){
                cout<<a<<" "<<x<<" ";a=b,b=10;}
          else cout<<x<<" ";


    }if(a!=10)cout<<a;
    return 0;
}
