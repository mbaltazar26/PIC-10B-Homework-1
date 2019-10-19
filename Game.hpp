//
//  Game.hpp
//  Pic 10B HW1
//
//  Created by Michaella Baltazar on 10/15/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp
#include <vector>
#include <string>
#include <iostream>
#include "Person.hpp"

#include <stdio.h>

using namespace std;

class Game
{
private:
    std::string board[9] = {" "," "," "," "," "," "," "," "," "};
    // all available spots, once vector is empty and there no win, then there is a draw
    vector <int> available = {1,2,3,4,5,6,7,8,9};
    //once there has been 9 valid moves, the board is filled up
    int moves=0;
    Person* p1;
    Person* p2;
public:
    Game(); //works
    Game(string playerOne, string playerTwo);   //works
    void grid();    //works
    void clearGrid();
    void playerMove(Person &p);
    void checkGrid();
    void play();
    int conversion(int pos);
    void showScore();   //works
    int findWinner(Person &p1, Person &p2);
    void presentWinner();
};

#endif /* Game_hpp */
