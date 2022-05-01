#include "Captain.hpp"
using namespace coup;

namespace coup {
    Captain::Captain(Game game,string name) : Player(game,name) {}
    void Captain::steal(Player player){}
    void Captain::block(Player player){}
    Captain::~Captain(){}
}