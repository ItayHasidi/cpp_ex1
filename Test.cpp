#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good snowman code") { // CHECK(nospaces(snowman()) == nospaces(""));
    CHECK(nospaces(ariel::snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(ariel::snowman(11111111)) == nospaces(" _===_(.,.) <( : )> ( : )"));
    CHECK(nospaces(ariel::snowman(11111112)) == nospaces("_===_(.,.)<(:)>(\"\")"));
    CHECK(nospaces(ariel::snowman(11111113)) == nospaces(" _===_ (.,.)<( : )> (___)"));
    CHECK(nospaces(ariel::snowman(11111114)) == nospaces(" _===_ (.,.) <( : )> (   )"));
    CHECK(nospaces(ariel::snowman(11111121)) == nospaces(" _===_ (.,.) <(] [)> ( : )"));
    CHECK(nospaces(ariel::snowman(11111122)) == nospaces(" _===_ (.,.) <(] [)> (\" \")"));
    CHECK(nospaces(ariel::snowman(11111123)) == nospaces(" _===_ (.,.) <(] [)> (___)"));
    CHECK(nospaces(ariel::snowman(11111124)) == nospaces(" _===_ (.,.) <(] [)> (   )"));
    CHECK(nospaces(ariel::snowman(11111131)) == nospaces(" _===_ (.,.) <(> <)> ( : )"));
    CHECK(nospaces(ariel::snowman(11111132)) == nospaces(" _===_ (.,.) <(> <)> (\" \")"));
    CHECK(nospaces(ariel::snowman(11111133)) == nospaces(" _===_ (.,.) <(> <)> (___)"));
    CHECK(nospaces(ariel::snowman(11111134)) == nospaces(" _===_ (.,.) <(> <)> (   )"));
    CHECK(nospaces(ariel::snowman(11111141)) == nospaces(" _===_ (.,.) <(   )> ( : )"));
    CHECK(nospaces(ariel::snowman(11111142)) == nospaces(" _===_ (.,.) <(   )> (\" \")"));
    CHECK(nospaces(ariel::snowman(11111143)) == nospaces(" _===_ (.,.) <(   )> (___)"));
    CHECK(nospaces(ariel::snowman(11111144)) == nospaces(" _===_ (.,.) <(   )> (   )"));
    CHECK(nospaces(ariel::snowman(11111211)) == nospaces(" _===_ (.,.)/<( : )  ( : )"));
    CHECK(nospaces(ariel::snowman(11111212)) == nospaces(" _===_ (.,.)/<( : )  (\" \")"));
    CHECK(nospaces(ariel::snowman(11111213)) == nospaces(" _===_ (.,.)/<( : )  (___)"));
    CHECK(nospaces(ariel::snowman(11111214)) == nospaces(" _===_ (.,.)/<( : )  (   )"));
    CHECK(nospaces(ariel::snowman(11111221)) == nospaces(" _===_ (.,.)/<(] [)  ( : )"));
    CHECK(nospaces(ariel::snowman(11111222)) == nospaces(" _===_ (.,.)/<(] [)  (\" \")"));
    CHECK(nospaces(ariel::snowman(11111223)) == nospaces(" _===_ (.,.)/<(] [)  (___)"));
    CHECK(nospaces(ariel::snowman(11111224)) == nospaces(" _===_ (.,.)/<(] [)  (   )"));
    CHECK(nospaces(ariel::snowman(11111231)) == nospaces(" _===_ (.,.)/<(> <)  ( : )"));
    CHECK(nospaces(ariel::snowman(11111232)) == nospaces(" _===_ (.,.)/<(> <)  (\" \")"));
    CHECK(nospaces(ariel::snowman(11111233)) == nospaces(" _===_ (.,.)/<(> <)  (___)"));
    CHECK(nospaces(ariel::snowman(11111234)) == nospaces(" _===_ (.,.)/<(> <)  (   )"));
    CHECK(nospaces(ariel::snowman(11111241)) == nospaces(" _===_ (.,.)/<(   )  ( : )"));
    CHECK(nospaces(ariel::snowman(11111242)) == nospaces(" _===_ (.,.)/<(   )  (\" \")"));
    CHECK(nospaces(ariel::snowman(11111243)) == nospaces(" _===_ (.,.)/<(   )  (___)"));
    CHECK(nospaces(ariel::snowman(11111244)) == nospaces(" _===_ (.,.)/<(   )  (   )"));
}

TEST_CASE("Bad snowman code") { // CHECK_THROWS(snowman());
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(2));
    CHECK_THROWS(snowman(3));
    CHECK_THROWS(snowman(4));
    CHECK_THROWS(snowman(5));
    CHECK_THROWS(snowman(6));
    CHECK_THROWS(snowman(7));
    CHECK_THROWS(snowman(8));
    CHECK_THROWS(snowman(9));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(10));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(13));
    CHECK_THROWS(snowman(14));
    CHECK_THROWS(snowman(15));
    CHECK_THROWS(snowman(16));
    CHECK_THROWS(snowman(17));
    CHECK_THROWS(snowman(18));
    CHECK_THROWS(snowman(19));
    CHECK_THROWS(snowman(20));
    CHECK_THROWS(snowman(21));
}

