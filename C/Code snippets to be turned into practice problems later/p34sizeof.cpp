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

    //string is a reference therefore it is 32 bytes
    string name = "Tomothy T. Jones";
    //double is 8 bytes
    double gpa = 2.5;
    //char is 1 byte
    char grade = 'F';
    //student is also 1 byte
    bool student = true;
    //array is the sum of all contained data in this case 5 bytes
    char grades[] = {'A', 'B', 'C', 'D', 'F', 'E'};
    //string array
    string students[] = {"Jim", "Shaun", "Juan", "Archimedes"};

    cout << sizeof(students)/sizeof(string) << " elements and\n" << sizeof (students) << " bytes\n";

    std::cout << "\n";
    return 0;
}