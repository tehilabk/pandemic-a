#pragma once

using namespace std;

namespace pandemic{

    class Board{
        public:
            Board();
            int& operator[](City city);
            friend ostream& operator<<(ostream& out, const Board& board);
            bool is_clean();
            void remove_cures();
    };
}    