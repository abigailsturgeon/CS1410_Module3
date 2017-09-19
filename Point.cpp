// File: Point
// Created by Abigail Sturgeon on 9/19/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>

using namespace std;

// Global, Constants, and Structures
const int MAX_X = 10;
const int MAX_Y = 10;
const float In_Cm = 2.54;

struct Point
{
    float x;        // x-coordinate
    float y;        // y-coordinate
};

// Prototypes
void ShowPoint(const struct Point &p);
void UpdatePoint(struct Point &p);
struct Point CreatePoint();
struct Point CreatePointValue(float x = 1.0, float y = 1.0);
// Inline Functions
inline float InchesToCm(float val) {return val * In_Cm;};

// Main Program Program
int main(void)
{
    Point p1 = {2.5, 3.1};
    Point p2, p3;
    ShowPoint(p1);
    UpdatePoint(p1);
    ShowPoint(p1);

    p2 = CreatePoint();
    ShowPoint(p2);

    p3 = CreatePointValue(1.5, 7.9);
    ShowPoint(p3);

    p3 = CreatePointValue();
    ShowPoint(p3);

    p3.x = InchesToCm(1.5);
    ShowPoint(p3);

    return 0;
}

// Function Definitions
// Take a constant address of a structure point
// You cannot modify the constant of the structure
void ShowPoint(const struct Point &p)
{
    cout << "X-coordinate is: " << p.x << endl;
    cout << "Y-coordinate is: " << p.y << endl;
}
void UpdatePoint(struct Point &p)
{
    // Update x and y by incrementing their value by 1
    p.x += 1.0;
    p.y += 1.0;
}
struct Point CreatePoint()
{
    Point p;
    p.x = 0.0;
    p.y = 0.0;
    return p;
}
// Take two optional input values
// If no values are provided, use the DEFAULT values
// ONLY in the prototype
struct Point CreatePointValue(float x, float y)
{
    Point p;
    p.x = x;
    p.y = y;
    return p;
}