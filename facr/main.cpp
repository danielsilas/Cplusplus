#include <iostream>
using namespace std;
long long int n,ok=0,a;
unsigned long long fact(int n)
{
    unsigned long long p=1;
	for(;n;n--){p=p*n;
	}
	return p;
}
int main()
{
  cin>>a;
  n=fact(a);
  cout<<fact(a*2)/(n%666013*n)/(a+1)%666013;
}
