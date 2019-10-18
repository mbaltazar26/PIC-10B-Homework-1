//
//  Person.cpp
//  Pic 10B HW1
//
//  Created by Michaella Baltazar on 10/15/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include "Person.hpp"
#include <string>

using namespace std;

Person::Person()
{
    name = "";
    score= 0;
}

Person::Person(string playerName)
{
    name = playerName;
    score = 0; 
}

int Person::playerScore()
{
    return score;
}

string Person::playerName()
{
    return name;
}

void Person::addWin()
{
    score++; 
}
