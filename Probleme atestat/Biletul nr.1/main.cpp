#include<fstream>
using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int fib(int n){
    if (n<2)return n;
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n,m;
    cin>>n;
    m=n;
    while (n>0){
        int i=0;
        int s=0;
        while (s<n){
            i++;
            s=fib(i);
      }
        if (s==n){
            if (n==m){
                cout<<fib(i-1)<<"+"<<fib(i-2);
                n=0;
		      }
            else {
                cout<<fib(i);
                n=0;
		      }
	      }
        else
	     {
            s=fib(i-1);
            cout<<s<<"+";
            n=n-s;
	     }
   }
return 0;
}
