#include <iostream>

int main() {
  int dividendo, divisor;
  std::cin >> dividendo >> divisor;
  if (divisor < 1) {
    std::cerr << "El divisor tiene que ser mayor que 0" << '\n';
    return 1;
  }
  std::cout << dividendo / divisor << " " << dividendo % divisor << '\n';
  return 0;
}