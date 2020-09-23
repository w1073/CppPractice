#include"doctest.h"
#include<iostream>

TEST_CASE("test Lambda") {

auto add = [](int a, int b) { return a + b; };

    SUBCASE("reserving increases just the capacity") {
        CHECK(add(1, 2)==3);
    }

     SUBCASE("reserving increases just the capacity") {
        CHECK(add(0, 0)==0);
    }

}