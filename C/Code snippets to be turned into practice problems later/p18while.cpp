#include <iostream>
//template used
int main() {

    //Here are some neat namespaces to consider using consistantly
    using std::cout;
    using std::string;
    using std::cin;
    using std::endl;
    //etc.

    std::cout << "\n";
    string name;
    while(name.empty()){
        cout << "Enter your name: ";
        std::getline(cin, name);

    }

    cout << "Hello " << name;

    while(1==1){
        cout << "Help! I'm stuck in an infinite loop!";
    }
    std::cout << "\n";
    return 0;
}