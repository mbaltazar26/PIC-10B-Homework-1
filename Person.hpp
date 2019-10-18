//
//  Person.hpp
//  Pic 10B HW1
//
//  Created by Michaella Baltazar on 10/15/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp
#include <string>

#include <stdio.h>

using namespace std;

class Person
{
private:
    string name;
    int score;
public:
    Person();
    Person(string playerName);
    int playerScore();
    string playerName();
    void addWin();
};

#endif /* Person_hpp */
