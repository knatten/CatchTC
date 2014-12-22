#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

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
