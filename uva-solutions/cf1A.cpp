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

int main_cf1A() {
    //fstream fin("/Users/vishal/Cerebro/uva-solutions/uva-solutions/cf1A.txt");
    long long a =0 ,b = 0,c =0;
    fin >> a >> b >> c;
    double rema =  a%c ? 1 : 0;
    double remb = b%c ? 1 : 0 ;
    long long k = ((a/c) + rema);
    long long j = ((b/c) + remb);
    cout << j*k;
    return 0;
}