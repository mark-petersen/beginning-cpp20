/* Exercise 2-3. For your birthday you've been given a long tape measure and
an instrument that measures angles (the angle between the horizontal and a line
to the top of a tree, for instance). If you know the distance, d, you are from
a tree, and the height, h, of your eye when peering into your angle-measuring
device, you can calculate the height of the tree with the formula
h+d*tan(angle). Create a program to read h in inches, d in feet and
inches, and angle in degrees from the keyboard, and output the height of the
tree in feet. */

#include <iostream>
#include <cmath>
#include <numbers> // std::numbers

// had to compile with g++ e2-3a.cpp -std=c++20

int main()
{
    int h;
    int dFt;
    int dIn;
    int a;
    const double pi = std::numbers::pi; // need -std=c++20 

    std::cout << "Height of your eye in inches, h= ";
    std::cin >> h;
    std::cout << "Distance from tree, feet then inches, d= ";
    std::cin >> dFt >> dIn;
    std::cout << "Angle in degrees, a= ";
    std::cin >> a;

    float hTree = h/12.0 + (dFt+dIn/12.0)*tan(a*pi/180.0);
    std::cout << "Height of the tree is: " << hTree << std::endl; 
}

