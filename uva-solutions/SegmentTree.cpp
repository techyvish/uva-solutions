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

class SegmentTree
{

private:

    vi st,A;
    int n;

    int left (int p) {
        return  p << 1;
    }
    int right (int p) {
        return  (p << 1) + 1;
    }

    void buid(int p, int L, int R) {

    }


};