//
// Created by Vishal Patel on 7/6/15.
// Copyright (c) 2015 Vishal Patel. All rights reserved.
//

//
// Created by Vishal Patel on 7/5/15.
// Copyright (c) 2015 Vishal Patel. All rights reserved.
//
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#include <string>
#include <fstream>
#include <ostream>
#include <sstream>
#include <string>
#include <fstream>
#include <ostream>
#include <sstream>
#include <iomanip>

#define fin cin

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

using namespace std;
typedef vector<int> vi;


int main_uri1024()
{
    std::ios::sync_with_stdio(false);
    fstream fin("/Users/vishal/Cerebro/uva-solutions/uva-solutions/uri1024.txt");

    int tc;
    fin >>  tc;
    char buffer[1024];
    while ( tc-- )
    {
        string s;
        getline(fin, s);
        for (int  i = 0; s[i] ;i++)
        {
            if ( (s[i]>= 'A' && s[i] <= 'Z') ||  (s[i]>= 'a' && s[i] <= 'z')){
                s[i] = s[i]+3;
            }
            reverse(s.begin(), s.end());
        }
    }

    return 0;
}