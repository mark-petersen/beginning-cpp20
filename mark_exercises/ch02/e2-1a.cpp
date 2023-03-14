#include <iostream>

int main() {
    int inches;
    int feet;

    std::cout << "convert length" << std::endl;
    std::cout << "enter the number of feet" << std::endl;
    std::cin >> feet;
    std::cout << "enter the number of inches" << std::endl;
    std::cin >> inches;

    std::cout << "You entered:" << inches << " inches and "<< feet << " feet."<<std::endl;
    int totalInches = feet*12+inches;
    std::cout << "That is " << totalInches << " inches in total"<<std::endl;
}
    
