#include <iostream>
//template used
int main() {
    std::cout << "\n";
    std::string name;
    int age;

    std::cout << "What's your name?: ";
    
        //Try alternating these two lines and adding spaces
    //std::getline(std::cin >> std::ws, name);
    //std::cin >> name;
       // before or between names in the terminal
    
    std::getline(std::cin >> std::ws, name);
    std::cin >> name;
    std::cout << "Hello " << name << "\n";


    std::cout << "What is your age" << "\n";
    std::cin >> age;
    std::cout << "You are " << age << " years old.";


    std::cout << "\n";
    return 0;
}