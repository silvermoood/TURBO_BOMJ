#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "doctest.h"
#include "sum.h"

TEST_CASE("testing the summa function") {
    CHECK(sum(1,2) == 1); // should fail
    CHECK(sum(3,2) == 5);
    CHECK(sum(0,0) == 0);
    CHECK(sum(-100,200) == 100);
}
