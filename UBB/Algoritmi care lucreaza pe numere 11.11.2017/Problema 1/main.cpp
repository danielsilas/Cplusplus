/*
    Enunt:
    Fie i,j,k trei numere naturale, i şi k>0. Să scrie un subprogram care returnează restul împărțirii
    numărului (ij) la k, deci (ij) modulo k (iterativ şi recursiv).
*/
#include <iostream>

using namespace std;

int RestI(int i, int j, int k)
{
    int iModK = i % k; // expresia e constanta in ciclu
    int R = 1;
    while (j--)
        R = (R * iModK) % k; // se aplica % lui i si produsului
    return R;
}

int Rest(int i, int j, int k)
{ // autoapel functia Rest cat timp j>0
    if (j > 0)
        return ((i % k) * Rest(i, j - 1, k)) % k;
    return 1; // la final se inlocuieste cu 1, in
} // sirul de produse.

int main()
{
    int i, j, k;
    cin >> i >> j >> k;
    cout << RestI(i, j, k) << endl
         << Rest(i, j, k);
    return 0;
}
