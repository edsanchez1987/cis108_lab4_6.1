// LAB4_6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

float diameter;
float depth;
float radius;
const float PI = 3.14159;
float volume;
float gallons;
float units;
float cost;

int main()
{
    cout << fixed << setprecision(2);
    cout << "Enter diameter of pool: ";
    cin >> diameter;
    radius = diameter / 2;

    cout << "\nEnter depth of pool: ";
    cin >> depth;

    volume = PI * radius * radius * depth;
    gallons = volume * 1728 / 231;       // gallons = volume * 1728 in/ft * 1gal/231in
    units = gallons / 748;               // units = gallons / 748
    cost = units * 1.80;

    cout << "\nPool with diameter of: " << diameter << " and depth of: " << depth << " has a total of: "
        << units << " units. \n\nCost to fill up pool: $" << cost << endl;

}


