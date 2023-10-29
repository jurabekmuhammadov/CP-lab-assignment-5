#include <iostream>
#include <iomanip>
using namespace std;

double myFunc(double x, double y)
{
  return x / y;
}

int main()
{
  double x, y;

  cout << "Enter the number x: ";
  cin >> x;
  cout << "Enter the number y: ";
  cin >> y;

  cout << setprecision(3) << myFunc(x, y);

  return 0;
}