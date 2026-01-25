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
    string students[] = {"Spongebob", "Patrick", "Sandy", "Sharlene", "Gary", "Squidward"};
    for(int i = 0; i < sizeof(students)/sizeof(string); i++){
        cout << students[i] << "\n";
    }
    cout << endl;
    //alternatively
    for(string student : students){
        cout << student << "\n";
    }
    cout << endl;
    int grades[] = {65, 72, 81, 93};
    for(int grade : grades){
        cout << grade << "\n";
    }
    std::cout << "\n";
    return 0;
}