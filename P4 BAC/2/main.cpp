#include <iostream>

using namespace std;

int f(int a){
    int d=2,nr_div=0;
    while(a>1){
        while(a%d==0){
            a/=d;
            nr_div++;
        }
        d++;
    }
    return nr_div;
}
int main()
{
    int n,x,y,z;
    cin>>n;
    if(n<10) if(f(n)==1) cout<<"da";
	   else cout<<"nu";
  else if(n<100) if(f(n)==1 && f(n%10*10+n/10)==1) cout<<"da";
		 else cout<<"nu";
       else
       {  x=n/100;
	  y=n/10%10;
	  z=n%10;
	  if(f(n)==1 && f(x*100+z*10+y)==1 && f(y*100+x*10+z)==1 &&
	     f(y*100+z*10+x)==1 && f(z*100+x*10+y)==1 && f(z*100+y*10+x)==1)
		cout<<"da";
		else cout<<"nu";
       }
    return 0;
}
