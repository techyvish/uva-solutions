//
// Created by Vishal Patel on 7/4/15.
// Copyright (c) 2015 Vishal Patel. All rights reserved.
//

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

#define fin cin

int main_cf()
{

    //fstream fin("/Users/vishal/Cerebro/uva-solutions/uva-solutions/cf.txt");

    int pages;
    fin >> pages ;
    int dayread = 0;
    int i = 1;
    int ppw[8] ={0};
    while (cin >> dayread)
        ppw[i++] = dayread;

    i = 1;
    while (pages)
    {
        pages -= ppw[i];
        if ( pages <= 0) {
            printf("%d", i);
            break;
        }
        if ( i ==  7 )
            i = 1;
        else
            i++;
    }

    return  0;
}