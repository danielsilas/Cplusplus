#include <iostream>

using namespace std;
int identificare(int n)
{
    int a, b, c, d;
    a = 1, b = 1, c = 1;
    cout << "a      b        c      d\n";
    while (c < n)
    {
        a++, c++, b = a, d = 2;
        cout << a << "      " << b << "        " << c << "\n";
        bool f = false;
        while (c <= n && d <= a / 2)
        {
            cout << a << "      " << b << "        " << c << "      " << d << endl;
            if (a % d == 0)
            {
                c++;
                b = d;
                f = true;
            }
            ++d;
        }
        if (f)
            --c;
    }
    return b;
}
int main()
{
    cout << identificare(5000);
    return 0;
}
