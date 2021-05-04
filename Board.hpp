#pragma once
#include "City.hpp"
#include <fstream>
#include <map>
#include "string"
#include <stdio.h>
using namespace std;

namespace pandemic{
    class Board{
       
        public:
            map<City, int> cityInDemo;
            Board();
            int& operator[](const City& city);
            friend ostream& operator<<(ostream& out, const Board& board);
            bool is_clean();
            void remove_cures();
    };
}    