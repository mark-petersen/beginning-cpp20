#include <iostream>

// ex 2-3 compute area of a circle

int main()
{
    float r;
    float pi = 3.1415;
    std::cout << "enter radius" << std::endl;
    std::cin >> r;
    float area = pi * r * r;
    std::cout << "The area of the circle is: " << area << std::endl;
}

