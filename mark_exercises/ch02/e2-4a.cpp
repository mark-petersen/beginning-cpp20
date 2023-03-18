/* 
Exercise 2-4. Your body mass index (BMI) is your weight, w, in kilograms
divided by the square of your height, h, in meters (w/(h*h)). Write a program
to calculate the BMI from a weight entered in pounds and a height entered in
feet and inches. A kilogram is 2.2 pounds, and a foot is 0.3048 meters.
*/

#include <iostream>
#include <cmath>
#include <numbers>

int main ()
{
    float wPounds; // body weight [lbs]
    float hFt; // height [ft]
    float hIn; // height [in]

    std::cout << "Body weight [lbs] = ";
    std::cin >> wPounds;
    std::cout << "Height in feet then inches = ";
    std::cin >> hFt >> hIn;
    float w = wPounds / 2.2; // weight [kg]
    float h = (hFt + hIn/12.0)*0.3048; // height [m]
    std::cout << "Your BMI = " << w / (h*h) << std::endl;
}
