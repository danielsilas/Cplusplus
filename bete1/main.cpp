#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("bete1.in");
ofstream cout("bete1.out");
int main()
{
    int a[1001], b[1001], s_a = 0, n, L, K, P = 0, max_a = -1, max_b = -1, oa, ob;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        s_a += a[i];
        if (a[i] > max_a)
            max_a = a[i], oa = 1;
        else if (a[i] == max_a)
            oa++;
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
        s_a += b[i];
        if (b[i] > max_b)
            max_b = b[i], ob = 1;
        else if (b[i] == max_b)
            ob++;
    }
    L = s_a / n;
    K = max_a + max_b;
    P = max(oa, ob) - abs(ob - oa);
    cout << L << endl
         << K << endl
         << P << endl;
    ;
    return 0;
}
