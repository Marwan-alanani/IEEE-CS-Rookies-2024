#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    int x1A, y1A, x2A, y2A;
    int x1B, y1B, x2B, y2B;
    cin >> x1A >> y1A >> x2A >> y2A;
    cin >> x1B >> y1B >> x2B >> y2B;
    // get centers
    long double centerAx = (x1A + x2A) / 2.00;
    long double centerAy = (y1A + y2A) / 2.00;
    long double centerBx = (x1B + x2B) / 2.00;
    long double centerBy = (y1B + y2B) / 2.00;
    // get radii
    long double radiusA = sqrt((pow((centerAx - x1A), 2)) + (pow((centerAy - y1A), 2)));
    long double radiusB = sqrt((pow((centerBx - x1B), 2)) + (pow((centerBy - y1B), 2)));
    // get distance between centers
    long double Dcenters = sqrt((pow((centerAx - centerBx), 2)) + (pow((centerAy - centerBy), 2)));
    
    // if one is inside another but they touch at some point  
    if (Dcenters <= abs(radiusA - radiusB))
    {
        cout << "YES";
        return 0;
    }

    // if one touches another
    else if (Dcenters <= radiusA + radiusB)
    {
        cout << "YES";
        return 0;
    }

    else
    {
        cout << "NO";
    }
}