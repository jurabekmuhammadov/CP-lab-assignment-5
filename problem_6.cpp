#include <iostream>
using namespace std;

int main()
{
  int arr[5];
  int product = 1;

  for (int i = 0; i < 5; i++)
  {
    cout << "Enter element " << i + 1 << ": ";
    cin >> arr[i];
  }

  for (int i = 0; i < 5; i++)
  {
    product *= arr[i];
  }

  cout << "The product of all elements of the array is: " << product;

  return 0;
}