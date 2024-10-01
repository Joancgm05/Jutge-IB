#include <iostream>

int main() {
  int years, days, hours, minutes, seconds;
  std::cin >> years >> days >> hours >> minutes >> seconds;
  years = years * 31536000;
  days = days * 86400;
  hours = hours * 3600;
  minutes = minutes * 60;

  std::cout << years + days + hours + minutes + seconds << '\n';
  return 0;
}