#include <iostream>
#include <cmath>  
using namespace std;
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
int remainder(int, int);
double squareRoot(int);
double logarithm(int);
int main() {
  int num1, num2;
  cout << "Enter two integers: ";
  cin >> num1 >> num2;
  cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
  cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
  cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
  cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
  cout << num1 << " % " << num2 << " = " << remainder(num1, num2) << endl;
  cout << "sqrt(" << num1 << ") = " << squareRoot(num1) << endl;
  cout << "log(" << num2 << ") = " << logarithm(num2) << endl;
  return 0;
}

int add(int a, int b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int multiply(int a, int b) {
  return a * b;
}

int divide(int a, int b) {
  return a / b;
}

int remainder(int a, int b) {
  return a % b;
}

double squareRoot(int a) {
  return sqrt(a);
}

double logarithm(int a) {
  return log(a);
}

