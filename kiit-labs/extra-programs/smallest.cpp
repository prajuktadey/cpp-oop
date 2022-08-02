/*WAP to find smallest element stored in an array. */

#include <iostream>
using namespace std;

int main() 
{
  
  int i, n;
  float arr[100];

  cout << "Enter total number of elements(1 to 100): ";
  cin >> n;
  cout << endl;

  // Store number entered by the user
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // Loop to store largest number to arr[0]
  for(i = 1;i < n; ++i) 
  {
    if(arr[0] > arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Smallest element = " << arr[0];

  return 0;
}
