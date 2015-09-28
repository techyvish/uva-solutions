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
        if ( L == R )
        {
            st[p] = L;
        }
        else
        {
            int p1 = left(p);
            int p2 = right(p);

            buid(p1, L              , (L + R) / 2);
            buid(p2, (L + R) / 2 + 1,           R);

            p1 = st[left(p)];
            p2 = st[right(p)];

            st[p] = (A[p1] <= A[p2]) ? p1 : p2;
        }
    }

    int rmq( int p, int L, int R, int i, int j) {

        if (i > R || j < L) return -1;
        if (L >= i && R <= j) return st[p];

        int p1 = rmq(left(p) , L          , (L + R) / 2, i, j);
        int p2 = rmq(right(p), (L+R)/2+1  ,           R, i, j);

        if ( p1 == -1) return p2;
        if ( p2 == -1) return p1;

        return  ( A[p1] <= A[p2]) ? p1 : p2;

    }

public:
    SegmentTree(const vi &_A)
    {
        A = _A;
        n = (int) A.size();
        st.assign(4*n, 0);
        buid(1, 0, n-1);
    }

    int rmq(int i,int j)
    {
        return rmq(1,0,n-1,i,j);
    }
};

int main_segment()
{
    int arr[]= {18,17,13,19,15,11,20};
    //vi A(arr,arr+7);
    vi A;
    A.push_back(18);
    A.push_back(17);
    A.push_back(13);
    A.push_back(19);
    A.push_back(15);
    A.push_back(11);
    A.push_back(20);

    SegmentTree s(A);

    cout << s.rmq(1,3);
    return 0;
}