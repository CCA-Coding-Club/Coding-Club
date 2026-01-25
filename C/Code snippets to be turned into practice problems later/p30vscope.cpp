#include <iostream>
//#include <ctime>
//template used

//Here are some neat namespaces to consider using consistantly
using std::cout;
using std::string;
using std::cin;
using std::endl;
//etc.
int myNum = 3;

int main() {

    int myNum = 2;


    std::cout << "\n";
    //::before a variable is called means that the variable is being called from the global scope exclusively

    cout << ::myNum;
    cout << myNum;



    std::cout << "\n";
    return 0;
}