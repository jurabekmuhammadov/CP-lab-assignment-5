#include <iostream>
using namespace std;

char decimalToChar(int decimal)
{
  if (decimal < 32 || decimal > 126)
  {
    return false;
  }
  else
  {
    return char(decimal);
  }
}

int main()
{
  int decimal;

  cout << "Enter the decimal number to convert the character: ";
  cin >> decimal;

  char character = decimalToChar(decimal);

  if (character)
  {
    cout << character;
  }
  else
  {
    cout << "Wrong";
  }

  return 0;
}