#include <iostream>
//template used
namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}
int main() {
    using namespace first;

    /*
        Here are some neat namespaces to consider using consistantly
        using std::cout;
        using std::string;
        etc.
    */
    std::cout << x << "\n";
    std::cout << x ;
    std::cout << "\n";
    int x = 0;
    //"::" is the scope resolution operator
    std::cout << first::x << "\n" << second::x << "\n";
    std::cout << x << "\n";
    std::cout << x;

    std::cout << "\n";
    return 0;
}