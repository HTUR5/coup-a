#include "Assassin.hpp"
using namespace coup;

namespace coup {
    class Player;
    class Duke;
    Assassin::Assassin (Game game,string name) : Player(game,name) {}
    Assassin::~Assassin(){}
}