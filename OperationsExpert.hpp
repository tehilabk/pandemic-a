#pragma once
using namespace std;
#include "Player.hpp"

namespace pandemic{

class OperationsExpert: public Player{
    public:
        OperationsExpert(const Board& board, const City& city);
        string role();
        Player& build();
};

}