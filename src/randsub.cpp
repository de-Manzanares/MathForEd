#include "util.hpp"

#include <iostream>

int main() {
  while (std::cin.good()) {
    const int a = util::random_in_range(0, 5);
    const int b = util::random_in_range(0, a);
    util::print(a, '-', b, '=');
    util::wait_for_enter();
    util::print(a, '-', b, '=', a - b);
    std::cout << '\n';
    util::wait_for_enter();
  }
}
