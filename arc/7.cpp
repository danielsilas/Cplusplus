#include <iostream>
#include <queue>
using namespace std;
queue<int> Q;
int main()
{
    int a, b, n, m, i, j, v[100], k = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        k++;
        Q.push(v[i]);
        if (v[i] == v[i - 1])
            k--;
    }
    //  while(Q.empty()){
    a = Q.front();
    Q.pop();
    b = Q.front();
    // }
    cout << a << " " << b;
    return 0;
}
