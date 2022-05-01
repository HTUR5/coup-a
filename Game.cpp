#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include "Game.hpp"

using namespace std;
using namespace coup;


namespace coup {
    class Player;
    Game::Game(){}

    std::string Game::turn() {
        return "turn";
    }
    
    vector<string> Game::players() {
        vector<string> ans;
        return ans;
    }

    std::string Game::winner() {
        return "winner";
    }
    
    Game::~Game(){}

}