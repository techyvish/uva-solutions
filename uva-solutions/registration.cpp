//
// Created by Vishal Patel on 7/4/15.
// Copyright (c) 2015 Vishal Patel. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <ostream>
#include <sstream>

#define fin cin

using namespace std;
int main()
{
    //fstream fin("/Users/vishal/Cerebro/uva-solutions/uva-solutions/registration.txt");

    int tc = 0;
    fin >> tc;
    map<string,int> regmap;
    string str;
    while(tc--)
    {
        fin >> str;
        if ( regmap[str] )
        {
            int i = 0;
            while (str[i] >= 'a' && str[i] <= 'z')
            {
                i++;
            }
            string o = str.substr(0, i);
            string s = str.substr(i, str.length());
            int a = 0;

            stringstream ss(s);
            ss >> a;
            a++;

            ostringstream os;
            os << a;
            s = os.str();

            string ns = o + s;
            regmap[ns] =1;
            cout << ns << endl;
        }
        else
        {
          regmap[str] =1 ;
            cout << "OK" << endl;
        }
    }

    return 0;
}
