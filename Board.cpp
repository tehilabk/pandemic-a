#include "Board.hpp"
#include "City.hpp"
#include <fstream>
using namespace std;
using namespace pandemic;

namespace pandemic{

    Board::Board(){
        cityInDemo[City::Kinshasa]=0;
        cityInDemo[City::MexicoCity]=0;
        cityInDemo[City::HoChiMinhCity]=0;
        cityInDemo[City::Chicago]=0;
    }

    int& Board::operator[](const City& city){
        if(cityInDemo.find(city)==cityInDemo.end()){
            throw "meaningful error message";
        }
        
        return cityInDemo.at(city);
        
    }
    ostream& operator<<(ostream& out, const Board& board){
        return out;
    }

    bool Board::is_clean(){
        return true;
    }

    void Board::remove_cures(){}
  
    
}    