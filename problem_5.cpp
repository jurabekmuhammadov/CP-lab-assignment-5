#include <iostream>
using namespace std;

void printPrimeNumbers(int start, int end)
{
  for (int i = start + 1; i <= end; i++)
  {
    bool isPrime = true;
    for (int j = 2; j * j <= i; j++)
    {
      if (i % j == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      cout << i << " ";
    }
  }
}

int main()
{
  int x, y;

  cout << "Enter the number x: ";
  cin >> x;
  cout << "Enter the number y: ";
  cin >> y;

  printPrimeNumbers(x, y);

  return 0;
}