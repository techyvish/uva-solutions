//
// Created by Vishal Patel on 7/2/15.
// Copyright (c) 2015 Vishal Patel. All rights reserved.
//

#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
#include <fstream>
#include <string>
#include <fstream>

#define cin fin
using namespace std;

int main_1()
{
    int i = 40;
    float f = 839.21f;
    printf("%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
    printf("%10.3f|%10.3e|%-10g|\n",f,f,f);

    fstream fin("/Users/vishal/Cerebro/uva-solutions/uva-solutions/scan.txt");
    const int MAX = 1024;
    char buffer[MAX];


    while ( fin.getline(buffer,MAX) )
    {
        int i,j;
        float x,y;
        sscanf(buffer,"%d%d%f%f",&i,&j,&x,&y);
        printf("%5d|%5d|%-5.1f|%5.2f|\n",i,j,x,y);

    }

    return 0;
}
