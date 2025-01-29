#include <iostream>
#include <stdexcept>

int main() {
  int x = 10;
  int y = 0;
  int z;

  try {
    if (y == 0) {
      throw std::runtime_error("Division by zero error");
    }
    z = x / y;
    std::cout << "Result: " << z << std::endl;
  } catch (const std::runtime_error& error) {
    std::cerr << "Error: " << error.what() << std::endl;
  }

  return 0;
}