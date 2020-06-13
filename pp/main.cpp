#include <iostream>

using namespace std;

int main()
{
    int a, b;

cin >>a;
if(a<=3)cout<<"NU EXISTA";
else
if ((a - 3) % 3 != 0) cout << "NU EXISTA";
    else
    {
    	for(int i=1;i<=a-3;++i)
            if(a==i*3 + 6)
            	cout<<i+1<<" "<<i+2<<" "<<i+3;
    }


    return 0;
}
