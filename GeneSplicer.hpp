#pragma once
using namespace std;
#include "Player.hpp"

namespace pandemic{

class GeneSplicer: public Player{
    public:
        GeneSplicer(const Board& board, const City& city);
        string role();
        Player& discover_cure(const Color& color);
};

}    