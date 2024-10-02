#include <iostream>

int main() {
  int number1, number2, number3, maximum;
  std::cin >> number1 >> number2 >> number3;
  maximum = number1;
  if (number2 > maximum) {
    maximum = number2;
  }
  if (number3 > maximum) {
    maximum = number3;
  }
  std::cout << maximum << '\n';
  return 0;
}