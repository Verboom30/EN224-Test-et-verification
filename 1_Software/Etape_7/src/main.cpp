#include "pgcd.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE("Fonctionnement normal","[PGCD]"){

		SECTION("A > B"){
			REQUIRE(PGCD(6435,2598)==3);
			REQUIRE(PGCD(50925,259)==7);
			REQUIRE(PGCD(1005,25)==5);
			REQUIRE(PGCD(8942,796)==2);
		}
		SECTION("A < B"){
			REQUIRE(PGCD(1567,8947)==1);
			REQUIRE(PGCD(6137,10273)==1);
			REQUIRE(PGCD(29737,37675)==1);
			REQUIRE(PGCD(16678,63758)==2);
		}
		SECTION("A = B"){
			REQUIRE(PGCD(8957,8957)==8957);
			REQUIRE(PGCD(2068,2068)==2068);
			REQUIRE(PGCD(755,755)==755);
			REQUIRE(PGCD(78,78)==78);
		}
}
TEST_CASE("Cas prrticuliers","[PGCD]"){

		SECTION("A > B"){
			REQUIRE(PGCD(80,0)==80);
			REQUIRE(PGCD(688,0)==688);
			REQUIRE(PGCD(65535,25)==5);
			REQUIRE(PGCD(65535,796)==1);
		}
		SECTION("A < B"){
			REQUIRE(PGCD(0,8947)==8947);
			REQUIRE(PGCD(0,10273)==10273);
			REQUIRE(PGCD(29737,65535)==1);
			REQUIRE(PGCD(16678,65535)==1);
		}
		SECTION("A = B"){
			REQUIRE(PGCD(0,0)==0);
			REQUIRE(PGCD(2068,2068)==2068);
			REQUIRE(PGCD(65536,65536)==65536);
			REQUIRE(PGCD(78,78)==78);
		}
}