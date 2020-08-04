#include <catch2/catch.hpp>
#include "thing.hpp"

unsigned int Factorial(unsigned int number) {
  return number <= 1 ? number : Factorial(number - 1) * number;
}

TEST_CASE("Factorials are computed", "[factorial]") {
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(10) == 3628800);
}

TEST_CASE("thing is squared", "[thing]") {
  REQUIRE(thing(5) == 25);
  REQUIRE(thing(10) == 100);
  REQUIRE(thing(2) == 4);
}
