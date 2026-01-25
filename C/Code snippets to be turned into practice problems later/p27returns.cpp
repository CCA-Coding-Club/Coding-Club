#include <iostream>
//#include <ctime>
//template used

//Here are some neat namespaces to consider using consistantly
using std::cout;
using std::string;
using std::cin;
using std::endl;
//etc.

double square(double length);
double cube(double length);

int main() {



    std::cout << "\n";
    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    cout << "Area: " << area << "cm^2\n";
    cout << "Volume: " << volume << "cm^3\n";

    std::cout << "\n";
    return 0;
}

double square(double len){
    double result = len * len;
    return result;
}
double cube(double len){
    return len * len * len;
}