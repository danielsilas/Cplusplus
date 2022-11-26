#include <iostream>

using namespace std;

void afisare(int A)
{
    if (A > 10)
    {
        afisare(A / 10);
        cout << "Aif=" << A << endl;
        cout << A++ << endl;
        cout << --A << endl;
    }
}

int main()
{
    afisare(20);
    int A = 20;
    cout << endl;
    afisare(2);
    return 0;
}
