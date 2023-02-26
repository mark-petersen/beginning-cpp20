#include <format>
#include <iostream>
#include <string>

int main()
{
    int age=21;
    std:: string name{"Mark Petersen"};
    std::cout << "name:" << name << std::endl;
    std::cout << std::format("age: {}",age) << std::endl;
}

