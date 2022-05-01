#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include "Player.hpp"

namespace coup {
    class Player;
    class Game {
        private:
            int _turn;
            vector <Player> _players;
            int _winner;        
    
        public:
            Game();
            string turn();
            vector<string> players();
            string winner();
            ~Game();
    };
} 