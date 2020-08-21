#include <catch2/catch.hpp>
//#include "thing.hpp"

//TEST_CASE("thing is squared", "[thing]")
//{
//REQUIRE(thing(5) == 25);
//REQUIRE(thing(10) == 100);
//REQUIRE(thing(2) == 4);
//}
int thing(int x)
{
  return x;
}

TEST_CASE("thing a number", "[thing]")
{
  REQUIRE(thing(5) == 5);
  REQUIRE(thing(10) == 10);
  REQUIRE(thing(2) == 2);
}
