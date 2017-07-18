#include <iostream>

#ifdef __APPLE__
#include <apple/greeting.hpp>
#endif

#ifdef __linux__
#include <linux/greeting.hpp>
#endif

int main() {
  std::cout << greetings::greeting() << std::endl;
  return 0;
}
