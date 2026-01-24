#include <iostream>
//#include <ctime>

//for terminal commands system("etc.")
//#include <cstdlib>

//#include <iomanip>
//relevant functions: std::cin.clear(); fflush(stdin);


//template used
//Functions

//Here are some neat namespaces to consider using consistantly
using std::cout;
using std::string;
using std::cin;
using std::endl;
//etc.

int main() {

    std::cout << "\n";
    //Arrays must contain only the same data type. In this case strings.
    string cars[] = {"Corvette", "Mustang", "Camry"};

    cout << cars[0] << "\n";
    cout << cars[1] << "\n";
    cout << cars[2] << "\n";
    cars[0] = "Camaro";
    cout << cars[0] << "\n\n";
    
    string stead[1];
    stead[0] = "Horse";
    stead[1] = "pony";
    stead[2] = "Mare";
    cout << stead[0] << "\n";
    cout << stead[1] << "\n";
    cout << stead[2] << "\n";
    stead[3] = "Meow\n\n";
    cout << stead[3];

    double prices[] = {5.00, 7.50, 9.99, 15.00};
    cout << prices[0] << "\n";
    cout << prices[1] << "\n";
    cout << prices[2] << "\n";
    cout << prices[3] << "\n";

    std::cout << "\n";
    return 0;
}