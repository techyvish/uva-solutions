//
// Created by Vishal Patel on 7/4/15.
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

#define fin cin

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

using namespace std;

int main()
{
    //fstream fin("/Users/vishal/Cerebro/uva-solutions/uva-solutions/uri1021.txt");

    double amount = 0.0f;
    fin >> amount;
    double notas[6] = {100, 50, 20, 10, 5, 2};
    double moedas[6] = {1, 0.50, 0.25, 0.10, 0.05 ,0.01};

    int n = 6;
    printf("NOTAS:\n");
    for ( int i = 0 ; i < 6 ; i++ )
    {
        double rem = fmod(amount ,notas[i]);
        double amt = amount/ notas[i];
        printf("%d nota(s) de R$ %.2f\n",(int)amt,((int)amt != 0 ? (int)amt : 1)*notas[i]);
        amount = rem;
    }

    printf("MOEDAS:\n");
    for ( int i = 0 ; i < 6 ; i++ )
    {
        double rem = fmod(amount ,moedas[i]);
        double amt = amount/ moedas[i];
        printf("%d moeda(s) de R$ %.2f\n",(int)amt,((int)amt != 0 ? (int)amt : 1)*moedas[i]);
        amount = rem;
    }
    return 0 ;
}
