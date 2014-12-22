#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <unistd.h>


int X() { return 1; }
int Y() { return 2; }

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    SECTION("first") {
        //REQUIRE( X() == Y());
        SECTION("second") {
            REQUIRE( 10 == 20);
        }
    }
}

TEST_CASE("Other test")
{
    usleep(20 * 1000 * 1000);
    REQUIRE(1 == 1);
}

TEST_CASE("Other test 2")
{
    usleep(20 * 1000 * 1000);
    REQUIRE(1 == 1);
}

TEST_CASE("Other test 3")
{
    usleep(20 * 1000 * 1000);
    REQUIRE(1 == 1);
}
