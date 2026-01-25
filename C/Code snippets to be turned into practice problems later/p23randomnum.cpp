#include <iostream>
#include <ctime>
//template used
int main() {

    //Here are some neat namespaces to consider using consistantly
    using std::cout;
    using std::string;
    using std::cin;
    using std::endl;
    //etc.

    std::cout << "\n";
    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1 << "\n";
    cout << num2 << "\n";
    cout << num3 << "\n";

    std::cout << "\n";
    return 0;
}