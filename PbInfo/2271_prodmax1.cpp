/*Requirement
A string of nlong longegers is given. Determine the largest number that can be written as the product of two elements of the string.

Input data
The program reads the number from the keyboard n, and then the nelements of the string.

Output data
The program will display the determined number on the screen P.

Restrictions and clarifications
2 ≤ n ≤ 100.000
the string elements will be contained in the range(-1.000.000, 1.000.000)
*/

// Example
// entry

// 7
// -8 3 9 -1 -2 7 -10
// Exit

// 80

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long max_nr = v[n - 1] * v[n - 2];
    long long min = v[0] * v[1];
    cout << max(max_nr, min);
    return 0;
}