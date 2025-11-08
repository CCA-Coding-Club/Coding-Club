#include <iostream>

int main() {
    int age = 25; //declaration
    int year = 2000;
    int  sum = age + year;
    //doubles
    double gpa = 3.9;
    double temperature = 66.5;
    //characters or char
    char letter = 'A';
    char letter2 = 'b';
    std::cout << letter << '\n' << letter2 << "\n\n";
    //boolean
    bool student = false;
    bool power = true;
    bool forSale = true;
    //strings
    std::string name = "Weston";
    std::string day = "Monday";
    std::string address = "1234 this is a real St.";

    std::cout << name << "\n";
    std::cout << age << std::endl << year << std::endl << sum;
    std::cout << gpa << "\n" << temperature;

    std::cout << "\nHello " << name << "!\n";
    std::cout << "You are " << age << " years old.";
    std::cout << std::endl;    
    return 0;
}