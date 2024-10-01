#include <iostream>

int main() {
  unsigned long long number1, number2;
  std::cin >> number1 >> number2;
  unsigned long long resultado{number1 * number2};
  std::cout << resultado << '\n';
  return 0;
}