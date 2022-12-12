/*
Requirement
It is considered a rectangular building consisting of n*mrooms, arranged in nlines and mcolumns. The entrance to the building is in the coordinate room (1,1), and the exit is in the coordinate room (n,m). From any room (i,j)you can only reach rooms (i+1,j)or (i,j+1). Determine how many ways one can get from room (1,1)to room (n,m).

Since the number of possibilities can be very large, only the remainder of this number when divided by 9901.

Input data
The input file cladire.incontains the numbers on the first line n m.

Output data
The output file cladire.outwill contain the number on the first line P, representing the number of ways to get from room (1,1)to room (n,m), number displayed modulo 9901.

Restrictions and clarifications
1 ≤ n , m ≤ 1000


Example
cladire.in

3 3
cladire.out

6
Explanation



Load solution

Paste the code here
Choose the programming language
C++
1
​
 Contact •  Reload • 2a02:2f0e:311f:c00:f022:ed76:2eb6:3f2e
*/
#include <fstream>
using namespace std;

ifstream cin("cladire.in");
ofstream cout("cladire.out");

// use caching to avoid recomputing the same subproblem
int sub(int n, int m) {
  static int cache[1001][1001] = {0};
  if (cache[n][m] != 0) {
    return cache[n][m];
  }
  if (n == 1 && m == 1) return 1;
  
  int result = 0;
  if (n > 1) {
    result += sub(n - 1, m);
  }
  if (m > 1) {
    result += sub(n, m - 1);
  }
  cache[n][m] = result % 9901;
  return cache[n][m];
}

int main()
{
  int n, m;
  cin >> n >> m;
  cout << sub(n, m);
  return 0;
}
