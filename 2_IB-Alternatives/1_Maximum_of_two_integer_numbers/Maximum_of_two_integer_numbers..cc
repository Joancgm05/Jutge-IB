#include <iostream>

int main() {
  int number1, number2, maximum;
  std::cin >> number1 >> number2;
  maximum = number1;
  if (number2 > number1) {
    maximum = number2;
  }
  std::cout << maximum << '\n';
  return 0;
}