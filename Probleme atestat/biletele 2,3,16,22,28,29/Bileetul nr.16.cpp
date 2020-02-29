#include <fstream>

using namespace std;
ifstream cin("numere.in");
ofstream cout("numere.out");
int desc_n_b(int n,int b)
{
    int nr=0,r,p=1;
    while(n!=0) {
		r=n%10;
		n=n/10;
		nr=nr+r*p;
		p=p*b;
	}
	return nr;
}
int main() {
	int n1,b1,n2,b2;
	cin >> b1>>b2;
	cin >> n1>>n2;
	cout<<desc_n_b(n1,b1)+desc_n_b(n2,b2);
}
