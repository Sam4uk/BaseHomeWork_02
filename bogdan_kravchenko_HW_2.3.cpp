#include <iostream>

int main() {

  std::cout << "This program turns number in reverse.\n";

  std::cout << "Enter number for reverse: \n";

  int32_t number;
  std::cin >> number;
  int64_t reverse_number{0};
  if (number < 10) {
    std::cout << "reverse number is the same as you are entered\n";
    return;
  }

  do {
    reverse_number *= 10;
    reverse_number += number % 10;
    number /= 10;
  } while (number != 0);

  std::cout << reverse_number << "\n";
  return 0;
}
