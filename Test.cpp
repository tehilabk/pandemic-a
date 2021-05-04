
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
#include "doctest.h"
#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;
using namespace doctest;
using namespace pandemic;



Board board;

TEST_CASE ("check not throw") {

board[City::Kinshasa] = 3;      // put 3 yellow disease cubes in Kinshasa.
board[City::Kinshasa] = 2;      // change number of disease cubes in Kinshasa to 2.
board[City::MexicoCity] = 3;    // put 3 yellow disease cubes in MexicoCity
board[City::HoChiMinhCity] = 1; // put 1 red disease cube in HoChiMinhCity
board[City::Chicago] = 1;       // put 1 blue disease cube in Chicago

OperationsExpert p1 {board, City::Atlanta};  // initialize an "operations expert" player on the given board, in Atlanta.
OperationsExpert p2 {board, City::Kinshasa};  // initialize an "operations expert" player on the given board, in Atlanta.
OperationsExpert p3 {board, City::MexicoCity};  // initialize an "operations expert" player on the given board, in Atlanta.
OperationsExpert p4 {board, City::HoChiMinhCity};  // initialize an "operations expert" player on the given board, in Atlanta.
OperationsExpert p5 {board, City::Chicago};  // initialize an "operations expert" player on the given board, in Atlanta.

//drive
CHECK_NOTHROW(p1.drive(City::Atlanta));
CHECK_NOTHROW(p2.drive(City::Kinshasa));
CHECK_NOTHROW(p3.drive(City::MexicoCity));
CHECK_NOTHROW(p4.drive(City::HoChiMinhCity));
CHECK_NOTHROW(p5.drive(City::Chicago));

//fly_direct
CHECK_NOTHROW(p1.fly_direct(City::Atlanta));
CHECK_NOTHROW(p2.fly_direct(City::Kinshasa));
CHECK_NOTHROW(p3.fly_direct(City::MexicoCity));
CHECK_NOTHROW(p4.fly_direct(City::HoChiMinhCity));
CHECK_NOTHROW(p5.fly_direct(City::Chicago));

//fly_charter
CHECK_NOTHROW(p1.fly_charter(City::Atlanta));
CHECK_NOTHROW(p2.fly_charter(City::Kinshasa));
CHECK_NOTHROW(p3.fly_charter(City::MexicoCity));
CHECK_NOTHROW(p4.fly_charter(City::HoChiMinhCity));
CHECK_NOTHROW(p5.fly_charter(City::Chicago));

//fly_shuttle
CHECK_NOTHROW(p1.fly_shuttle(City::Atlanta));
CHECK_NOTHROW(p2.fly_shuttle(City::Kinshasa));
CHECK_NOTHROW(p3.fly_shuttle(City::MexicoCity));
CHECK_NOTHROW(p4.fly_shuttle(City::HoChiMinhCity));
CHECK_NOTHROW(p5.fly_shuttle(City::Chicago));

//build
CHECK_NOTHROW(p1.build());
CHECK_NOTHROW(p2.build());
CHECK_NOTHROW(p3.build());
CHECK_NOTHROW(p4.build());
CHECK_NOTHROW(p5.build());

//treat
CHECK_NOTHROW(p1.treat(City::Atlanta));
CHECK_NOTHROW(p2.treat(City::Kinshasa));
CHECK_NOTHROW(p3.treat(City::MexicoCity));
CHECK_NOTHROW(p4.treat(City::HoChiMinhCity));
CHECK_NOTHROW(p5.treat(City::Chicago));

//take_card
CHECK_NOTHROW(p1.take_card(City::Atlanta));
CHECK_NOTHROW(p2.take_card(City::Kinshasa));
CHECK_NOTHROW(p3.take_card(City::MexicoCity));
CHECK_NOTHROW(p4.take_card(City::HoChiMinhCity));
CHECK_NOTHROW(p5.take_card(City::Chicago));
}

TEST_CASE ("check role") {

board[City::Kinshasa] = 3;      // put 3 yellow disease cubes in Kinshasa.
board[City::Kinshasa] = 2;      // change number of disease cubes in Kinshasa to 2.
board[City::MexicoCity] = 3;    // put 3 yellow disease cubes in MexicoCity
board[City::HoChiMinhCity] = 1; // put 1 red disease cube in HoChiMinhCity
board[City::Chicago] = 1;       // put 1 blue disease cube in Chicago

OperationsExpert p1 {board, City::Atlanta};  // initialize an "operations expert" player on the given board, in Atlanta.
Dispatcher p2 {board, City::Kinshasa};  // initialize an "operations expert" player on the given board, in Atlanta.
Scientist p3 {board, City::MexicoCity,1};  // initialize an "operations expert" player on the given board, in Atlanta.
Medic p4 {board, City::HoChiMinhCity};  // initialize an "operations expert" player on the given board, in Atlanta.
Virologist p5 {board, City::Chicago};  // initialize an "operations expert" player on the given board, in Atlanta.
GeneSplicer p6 {board, City::Atlanta};  // initialize an "operations expert" player on the given board, in Atlanta.
FieldDoctor p7 {board, City::Kinshasa};  // initialize an "operations expert" player on the given board, in Atlanta.


CHECK_EQ(p1.role(),"OperationsExpert");
CHECK_EQ(p2.role(),"Dispatcher");
CHECK_EQ(p3.role(),"Scientist");
CHECK_EQ(p4.role(),"Medic");
CHECK_EQ(p5.role(),"Virologist");
CHECK_EQ(p6.role(),"GeneSplicer");
CHECK_EQ(p7.role(),"FieldDoctor");


}