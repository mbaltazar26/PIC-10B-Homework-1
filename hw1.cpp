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
    int rounds = 0;
    string playerOne, playerTwo;
    cout << "Hello! Welcome to Tic-Tac-Toe!" << endl;
    cout << "How many games would you like to play?" << endl;
    cin >> rounds;
    while (!cin)
    {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Please input an integer: " << endl;
        cin >> rounds;
    }
    cout << "What is player 1's name?" << endl;
    cin >> playerOne;
    cout << "What is player 2's name?" << endl;
    cin >> playerTwo;
    Game hello = Game(playerOne, playerTwo);
    for (int i = 0; i < rounds; i++)
    {
        hello.grid();
        hello.play();
        hello.showScore();
    }
    hello.presentWinner();
}
