#include <iostream>
using namespace std;

int myFunc(double k)
{
  double inMeters = k * 1000;
  return inMeters;
}

int main()
{
  double k;
  cout << "Enter the kilometer: ";
  cin >> k;

  cout << myFunc(k);
}