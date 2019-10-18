//
//  hw1.cpp
//  Pic 10B HW1
//
//  Created by Michaella Baltazar on 10/15/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include <stdio.h>
#include "Game.hpp"
#include "Person.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "hello" << endl;
    string playerOne, playerTwo;
    cout << "What is player 1's name?" << endl;
    cin >> playerOne;
    cout << "What is player 2's name?" << endl;
    cin >> playerTwo;
    Game hello = Game(playerOne, playerTwo);
    hello.grid();
    hello.showScore();
    hello.play();
    
}
