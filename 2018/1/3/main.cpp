#include <iostream>
using namespace std;
int fr[100001], n, obs;
bool nu_i_fundatura(int n, int m, int i, int j, int mat[100][100])
{
    if (i > n || j > n - i + 1 || mat[i][j] == 0)
        return 0;
    return 1;
}
int main()
{
    int mat[101][101];
    cin >> n >> obs;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= i; ++j)
            mat[i][j] = i * (i - 1) / 2 + j;
    int m[100];
    for (int l = 1; l <= obs; l++)
    {

        cin >> m[l];
        int a = 1, b = 1;
        for (int i = 2; i <= m[l]; ++i)
        {
            a = b + 1;
            b = b + i;
            if (m[l] >= a && m[l] <= b)
                for (int j = a; j <= b; ++j)
                    if (j == m[l])
                        fr[i]++;
        }
    }
    int mfr = -1, l = 1, p;
    for (int i = 2; i <= n; ++i)
        if (fr[i] > mfr)
            mfr = fr[i], p = i;
    cout << p << endl;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= i; ++j)
            if (l <= obs && m[l] == mat[i][j])
                mat[i][j] = 0, ++l;
    int i = 1, j = 1, ko = 1;
    while (i < n && j < n)
    {
        ko++;
    }
    return 0;
}
