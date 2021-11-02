//
//  main.cpp
//  StringDemo
//
//  Created by Russell Bishop on 9/11/19.
//  Copyright © 2019 Russell Bishop. All rights reserved.
//
// Program StrDemo demonstrates string functions.
#include <iostream>
#include <string>
using namespace std;

const string TITLE = "How hot was it on friday?";
const string FRIDAY = "friday";

int main()
{
    string name = "Russell Bishop";
    cout  << TITLE << endl;
    cout  << TITLE.length()  << endl;
    cout  << TITLE.capacity()  << endl;
    name.resize(14);
    cout  << "After resize the name "<< name << endl;
    cout  << TITLE.find("was")  << endl;
    cout  << TITLE.find(FRIDAY)  << endl;
    cout  << TITLE.substr(1, 3)  << endl;
    cout  << TITLE.substr(18,25)  << endl;
    cout  << TITLE.substr(1, 25).length()  << endl;
    cout  << "Character in the 10th position of TITLE is "
    << TITLE.at(10);
    cout  << endl;
    return 0;
}

