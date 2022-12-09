// write cpp sresulteleton

#include <iostream>
using namespace std;

void nr_div_imp(int n, int &result)
{
  result = 0;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      result += i % 2 == 1 ? 1 : 0;
      result += (n / i) % 2 == 1 && (n / i) != i ? 1 : 0;
    }
  }
}

int main()
{
  int n, result;
  cin >> n;

  nr_div_imp(n, result);
  cout << result;

  return 0;
}