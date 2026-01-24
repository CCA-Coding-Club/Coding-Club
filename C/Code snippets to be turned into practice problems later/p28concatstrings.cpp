#include <iostream>
//#include <ctime>
//template used

//Here are some neat namespaces to consider using consistantly
using std::cout;
using std::string;
using std::cin;
using std::endl;
//etc.
string concatStrings(string st1, string st2);

int main() {

    string fname = "wes";
    string lname = "mok";
    string fullname;

    std::cout << "\n";

    fullname = concatStrings(fname, lname);
    cout << "Your full name is " + fullname + "! Welcome!";


    std::cout << "\n";
    return 0;
}
string concatStrings(string st1, string st2){
    return st1 + " " + st2;
}
