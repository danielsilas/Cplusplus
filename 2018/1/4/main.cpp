#include <fstream>
using namespace std;
ifstream cin("platou1.in");
ofstream cout("platou1.out");
int main()
{
    int x, j = 0, n = 0, a[100];
    while (cin >> x)
    {
        ++n;
        a[n] = x;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
            cout << a[j] << " ";
        for (int j = i + 2; j <= n; ++i)
            cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}
