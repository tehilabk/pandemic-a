#pragma once
using namespace std;
#include "Player.hpp"

namespace pandemic{

class Dispatcher: public Player{
    public:
        Dispatcher(const Board& board, const City& city);
        string role();
        Player& fly_direct(const City& city);
};

}    