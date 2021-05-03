#pragma once
using namespace std;
#include "Player.hpp"

namespace pandemic{

class Medic: public Player{
    public:
        Medic(const Board& board, const City& city);
        string role();
        Player& treat(const City& city);
};
}        