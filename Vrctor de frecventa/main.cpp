#include <fstream>
#include <iostream>

using namespace std;
ifstream fin("date.in");
int fr[100];
int main()
{
    int n,i,x;
while(fin>>n)fr[n]++;

    for(i=1;i<=n;i++)cout<<"frecventa de "<<i<<" : "<<fr[i]<<endl;
    return 0;

}
