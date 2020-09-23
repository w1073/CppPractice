#include<iostream>

int main() {

auto add = [](int a, int b) { return a + b; };

  std::cout<<add(1, 2);
  return 0;
}