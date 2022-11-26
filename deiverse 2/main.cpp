#include <fstream>
using namespace std;
bool ok;
ifstream fin("nrsufix.in");
ofstream fout("nrsufix.out");
int main()
{
    int sufix, numere, buffer;
    fin >> sufix;
    int len_of_suf = sufix, p = 10;
    while (len_of_suf > 9)
        len_of_suf /= 10, p *= 10;
    while (fin >> numere)
    {
        int ultime = numere % p;
        if (ultime == sufix)
            buffer = numere, ok = 1;
    }
    if (ok)
        fout << buffer;
    else
        fout << "nu exista";
    return 0;
}
