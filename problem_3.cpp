#include <iostream>
using namespace std;

bool isIsoscelesRightTriangle(int a, int b, int c)
{
  if (a != b && b != c && c != a)
  {
    if (a * a + b * b == c * c)
    {
      return true;
    }
  }

  return false;
}

int main()
{
  int a, b, c;

  cout << "Enter the first side of the triangle: ";
  cin >> a;

  cout << "Enter the second side of the triangle: ";
  cin >> b;

  cout << "Enter the third side of the triangle: ";
  cin >> c;

  bool canBeFormed = isIsoscelesRightTriangle(a, b, c);

  if (canBeFormed)
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }

  return 0;
}