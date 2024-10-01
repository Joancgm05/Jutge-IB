#include <iostream>


int main() {
  int dividendo, divisor;
  std::cin >> dividendo >> divisor;
  if (divisor < 1) {
    std::cerr << "El divisor tiene que ser mayor que 0" << '\n';
    return 1;
  }
  int resto {dividendo % divisor};
  int cociente {dividendo / divisor};
  
  std::cout << cociente << " " << resto << '\n';
  return 0;
}