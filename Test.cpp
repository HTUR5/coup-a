#include "doctest.h"
#include <iostream>
#include <array>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace std;
using namespace coup;

TEST_CASE("GAME 1") { 
    Game game_1{};
    Duke duke{game_1, "0"};
	Assassin assassin{game_1, "1"};
	Ambassador ambassador{game_1, "2"};
	Captain captain{game_1, "3"};
	Contessa contessa{game_1, "4"};
    
    SUBCASE("Initialization of players") {
        //check that the players are showen by the correct order
        for(unsigned long i = 0; i < 5; i++) {
            CHECK_EQ(game_1.players().at(i), to_string(i));
        }

        CHECK_EQ(duke.coins(), 0);
        CHECK_EQ(assassin.coins(), 0);
        CHECK_EQ(ambassador.coins(), 0);
        CHECK_EQ(captain.coins(), 0);
        CHECK_EQ(contessa.coins(), 0);

    }

    SUBCASE("Game class") {
        CHECK_EQ(game_1.turn(), game_1.players().at(0));
        CHECK_EQ(game_1.winner(), "null");
    }

    SUBCASE("Game1") {
        // throws no exceptions
        CHECK_NOTHROW(duke.income());
        CHECK_NOTHROW(assassin.income());
        CHECK_NOTHROW(ambassador.income());
        CHECK_NOTHROW(captain.income());
        CHECK_NOTHROW(contessa.income());

        // throws exception, it is duke's turn now
        CHECK_THROWS(assassin.income());

	    CHECK_NOTHROW(duke.income());
	    CHECK_NOTHROW(assassin.foreign_aid());

        // throws exception, the last operation duke performed
	    // is income, which cannot be blocked by any role
	    CHECK_THROWS(captain.block(duke));

        // throws exception, the last operation duke performed
	    // is foreign aid, which cannot be blocked by contessa
	    CHECK_THROWS(contessa.block(assassin));

	    duke.block(assassin);

        ambassador.transfer(duke, assassin); //transfers 1 coin from duke to assassin
        captain.foreign_aid();
        contessa.foreign_aid();

        duke.tax();
        assassin.income();
        ambassador.foreign_aid();
        captain.steal(contessa);
        contessa.foreign_aid();

        duke.tax();
        // no exception, assassin can coup with only 3 coins
        assassin.coup(duke);
        contessa.block(assassin);


    }


}