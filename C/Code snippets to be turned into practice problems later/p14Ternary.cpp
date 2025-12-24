#include <iostream>
//template used
int main() {

    //Here are some neat namespaces to consider using consistantly
    using std::cout;
    using std::string;
    using std::cin;
    using std::endl;
    //etc.

    std::cout << "\n";
    int grade = 75;
    grade >= 60 ? cout << "You pass!" : cout << "You fail!";

    int number = 12;
    number % 2 == 1 ? cout << "\nODD\n" : cout << "\nEVEN\n";

    bool hungry = true;
    //hungry ? cout << "You are hungry" : cout << "You are full";
    //alternatively we can use this
    cout << (hungry ? "You are hungry" : "You are full");

    std::cout << "\n";
    return 0;
}