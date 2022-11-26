#include <iostream>
using namespace std;
int f(int n)
{
    int d = 2;
    while (1)
    {
        if (n % d == 0)
        {
            return d;
            break;
        }
        else
            d++;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
