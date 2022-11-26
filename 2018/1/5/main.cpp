#include <iostream>
#include <math.h>
using namespace std;
int n, i;
long long s;
int main()
{
    cin >> n;
    for (i = 1; i <= sqrt(n); ++i)
        if (n % i == 0)
        {
            s += i;
            if (n / i > i)
                s += n / i;
        }

    cout << s;
    return 0;
}
