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
#include <iomanip>

#define fin cin

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

using namespace std;
double ceil(double v, int p)
{
    v *= pow(10, p);
    v = ceil(v);
    v /= pow(10, p);
    return v;
}

int main_uri1021()
{

    //fstream fin("/Users/vishal/Cerebro/uva-solutions/uva-solutions/uri1021.txt");
    double amount = 0.0f;
    fin >> amount;
    double notas[6] = {100, 50, 20, 10, 5, 2};
    double moedas[6] = {1, 0.50, 0.25, 0.10, 0.05 ,0.01};

    amount = ceil(amount,2);
    int n = 6;
    printf("NOTAS:\n");
    for ( int i = 0 ; i < 6 ; i++ )
    {
        double rem = fmodf(amount ,notas[i]);
        double amt = ceil(amount/ notas[i],2);
        printf("%d nota(s) de R$ %.2f\n",(int)amt,notas[i]);
        amount = rem;
    }

    printf("MOEDAS:\n");
    for ( int i = 0 ; i < 6 ; i++ )
    {
        double rem = fmodf(amount ,moedas[i]);
        double amt = ceil(amount/ moedas[i],2);
        printf("%d moeda(s) de R$ %.2f\n",(int)amt,moedas[i]);
        amount = rem;
    }
    return 0 ;
}
