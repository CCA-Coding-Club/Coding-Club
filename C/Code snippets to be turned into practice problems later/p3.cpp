#include <iostream>
//template used
int main() {
    std::cout << "\n";
    const double PI = 3.141592;
    const int LIGHT_SPEED = 299792458;
    double mass = 15.2;
    const int W = 1920;
    const int H = 1080;
    //W = 10;
    //double PI = 4321.23;
    double radius = 10;
    double circumferance = 2 * PI * radius;
    double energy = mass * LIGHT_SPEED * LIGHT_SPEED;

    std::cout << circumferance << "cm\n";
    std::cout << energy << "J";
    std::cout << "\n";
    return 0;
}