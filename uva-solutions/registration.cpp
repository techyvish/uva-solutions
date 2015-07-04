//
// Created by Vishal Patel on 7/4/15.
// Copyright (c) 2015 Vishal Patel. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <ostream>
#include <sstream>

#define fin cin

using namespace std;
int main_registration()
{
    //fstream fin("/Users/vishal/Cerebro/uva-solutions/uva-solutions/registration.txt");

    int tc = 0;
    fin >> tc;
    map<string,int> regmap;
    string str;
    while(tc--) {
        fin >> str;
        if (regmap.count(str) != 0) {
        }
        else {
            regmap[str] = 1;
            cout << "OK" << endl;
        }
    }
    return 0;
}
