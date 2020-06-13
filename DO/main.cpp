#include <iostream>

using namespace std;

int f(int n){
  if(n==0)return 0;
  else return n%2+f(n/2);
}
int main()
{
   int n;
   while(cin>>n)
   cout<<f(n)<<endl;;
}
