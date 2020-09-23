#include"doctest.h"
#include<iostream>

TEST_CASE("test Lambda") {

auto add = [](int a, int b) { return a + b; };
std::cout << add(1, 2) << std::endl;

}