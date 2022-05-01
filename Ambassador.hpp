//Ambassador
#pragma once
#include <string>
#include "Player.hpp"
using namespace std;
namespace coup{
    class Ambassador : public Player
    {
    private:
      
    public:
            Ambassador(Game game,string name);
            void transfer(Player a, Player b);
            void PreventSteel(Player player);
            ~Ambassador();
    };
    
    
    


}