#include <iostream>

using namespace std;

int main() {
  // Declare an array of 10 integers
  int numbers[10];

  // Read in 10 integers from the keyboard
  for (int i = 0; i < 10; i++) {
    cout << "Enter an integer: ";
    cin >> numbers[i];
  }

  // Initialize the sum to 0
  int sum = 0;

  // Add the array elements, skipping the values at index 3 and 5
  for (int i = 0; i < 10; i++) {
    if (i != 3 && i != 5) {
      sum += numbers[i];
    }
  }

  // Print the sum
  cout << "Sum: " << sum << endl;

  // Print the integers in reverse order
  cout << "Reverse order: ";
  for (int i = 9; i >= 0; i--) {
    cout << numbers[i] << " ";
  }
  cout << endl;

  return 0;
}

