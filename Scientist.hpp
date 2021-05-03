#pragma once
using namespace std;
#include "Player.hpp"

namespace pandemic{

class Scientist: public Player{
    public:
        Scientist(const Board& board, const City& city, const int numOfCards);
        string role();
        Player& discover_cure(const Color& color);
};
}    