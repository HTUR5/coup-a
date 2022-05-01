#include "Duke.hpp"
using namespace coup;

namespace coup {
    class Player;
    class Duke;
    Duke::Duke(Game game,string name): Player(game,name) {

    }
    
    void Duke::tax(){}
    
    void Duke::block(Player player){}
    
    Duke::~Duke(){}
}