#include <iostream>
using namespace std;
int v[100002], n, k, nr;
int solutie(int x)
{
    if (v[x] == n)
        return 1;
    else
        return 0;
}
int valid(int x)
{
    if (x > 1)
    {
        for (int i = 1; i < x; i++)
            if (v[x] == v[i])
                return 0;
        if (v[x - 1] > v[x])
            return 0;
        if (v[x] - v[x - 1] > k)
            return 0;
    }
    return 1;
}
void Back(int x)
{
    for (int i = 1; i <= n; i++)
    {
        v[x] = i;
        if (valid(x))
            if (solutie(x))
                nr++;
            else
                Back(x + 1);
    }
}
int main()
{
    cin >> n >> k;
    v[1] = 1;
    Back(2);
    cout << nr;
    return 0;
}
