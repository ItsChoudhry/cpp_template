#include <catch2/catch.hpp>
#include "thing.hpp"

TEST_CASE("thing is squared", "[thing]")
{
  REQUIRE(thing(5) == 25);
  REQUIRE(thing(10) == 100);
  REQUIRE(thing(2) == 4);
}
