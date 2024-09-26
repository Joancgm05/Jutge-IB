#include <iostream>


int main() {
  long long dividendo, divisor;
  std::cin >> dividendo >> divisor;
  if (divisor < 1) {
    std::cerr << "El divisor tiene que ser mayor que 0" << '\n';
    return 1;
  }
  long long resto {dividendo % divisor};
  long long cociente {dividendo / divisor};

  int i{0};
  if (cociente < 0) {
    do {
      cociente = cociente + i;
      i--;
    } while ((cociente * divisor) > dividendo);
        resto = dividendo - (cociente * divisor);
  }
  
  std::cout << cociente << " " << resto << '\n';
  return 0;
}   