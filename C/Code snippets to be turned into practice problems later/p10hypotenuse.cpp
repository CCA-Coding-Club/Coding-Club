#include <iostream>
#include <cmath>
//template used
int main() {
/*
    Here are some neat namespaces to consider using consistantly
    using std::cout;
    using std::string;
    using std::cin;
    using std::endl;
    etc.
 */
    using std::cout;
    using std::cin;
    std::cout << "\n";
    double a, b, c;

    cout << "Enter side A: ";
    cin >> a;
    cout << "Enter side B: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "side C: " << c;

    std::cout << "\n";
    return 0;
}