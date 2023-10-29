#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int arr1[6];
  int arr2[6];

  for (int i = 0; i < 6; i++)
  {
    cout << "Enter element " << i + 1 << ": ";
    cin >> arr1[i];
    arr2[i] = arr1[i];

    for (int i = 1; i < 6; i += 2)
    {
      arr2[i] = pow(arr1[i], 3);
    }
  }

  for (int i = 0; i < 6; i++)
  {
    cout << arr2[i] << " ";
  }

  return 0;
}
