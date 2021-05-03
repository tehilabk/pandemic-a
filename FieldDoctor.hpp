#pragma once
using namespace std;
#include "Player.hpp"

namespace pandemic{

class FieldDoctor: public Player{
    public:
        FieldDoctor(const Board& board, const City& city);
        string role();
        Player& treat(const City& city);
};
}        