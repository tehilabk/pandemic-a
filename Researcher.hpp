#pragma once
using namespace std;
#include "Player.hpp"

namespace pandemic{

class Researcher: public Player{
    public:
        Researcher(const Board& board, const City& city);
        string role();
        Player& discover_cure(const Color& color);
};

}    