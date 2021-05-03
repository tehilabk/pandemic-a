#pragma once
using namespace std;
#include "Player.hpp"

namespace pandemic{

class Virologist: public Player{
    public:
        Virologist(const Board& board, const City& city);
        string role();
        Player& treat(const City& city);
};
}        