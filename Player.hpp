#pragma once
#include <string>
using namespace std;
#include <unordered_map>
#include <array>
#include "Game.hpp"

namespace coup {
   class Game;
   class Player {
        private:
         string name;
         int coinsAmount;
           
        public:
            Player(Game &g, string _name);
            void income();
            void foreign_aid();
            void coup(Player player);
            void role  ();
            int coins();
            ~Player();
   };
}