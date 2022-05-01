#include "Ambassador.hpp"
using namespace coup;

namespace coup {
   Ambassador::Ambassador(Game game,string name) : Player(game,name)  {}
    void Ambassador::transfer(Player a, Player b) {}
    void Ambassador::PreventSteel(Player player) {}
    Ambassador::~Ambassador() {}
}