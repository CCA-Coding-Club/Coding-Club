#include <iostream>
#include <vector>

/*
    "typedef" and "using" function the same
    typically people use "using" instead of "typedef"
    they are a quick way to make c++ more like python
    :|
*/

//typedef  std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
typedef int number_t;
using text_t = std::string;
//template used
int main() {
    std::cout << "\n";

    number_t age = 27;
    //pairlist_t pairlist;
    text_t firstName = "Bob";

    std::cout << firstName << "\n";
    std::cout << age  << "\n";

    std::cout << "\n";
    return 0;
}