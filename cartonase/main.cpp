#include <fstream>

using namespace std;
ifstream fin("cartonase.in");
ofstream fout("cartonase.out");

int main()
{
    int n, m, x, y, S = 0;
    fin >> n >> m;
    S = 2 * (n - 1) * (m - 1) + (n - 1) + (m - 1);
    fout << S;
    return 0;
}
