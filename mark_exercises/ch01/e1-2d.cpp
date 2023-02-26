#include <iostream>
#include <string>

// write name and age

int main()
{
    int age{21};
    std::string name{"Mark"};

    printf("My name is %s and I am %d years old.\n",name.c_str(),age);
    std::cout << "My name is "<<name<< " and I am " << age << " years old."<< std::endl;
}


