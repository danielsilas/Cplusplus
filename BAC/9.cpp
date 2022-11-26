#include <fstream>

using namespace std;
ifstream cin("bac.in");
ofstream cout("bac.out");
int s_cif(int n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + s_cif(n / 10);
}
int main()
{
    int n, k = 0, cnt = 0;
    while (cin >> n)

    {
        k++;
        if (s_cif(n) % 2 == 0)
            cnt++;
        cout << n << " ";
        if (k % 5 == 0)
            cout << endl;
    }
    cout << endl
         << cnt;
    return 0;
}
