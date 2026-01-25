#include <iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;
//template used

//function declaration
void happyBirthday(string my_name, int age);

int main() {

    //Here are some neat namespaces to consider using consistantly
    
    //etc.
    string my_name;
    cout << "Wass yo name homedog?! \n";
    cin >> my_name;

    int my_age = 25;

    
    std::cout << "\n";
    happyBirthday(my_name, my_age);
    happyBirthday(my_name, my_age);
    happyBirthday(my_name, my_age);


    std::cout << "\n";
    return 0;
}
//function definition
void happyBirthday(string name, int age){
    cout << "\nHappy Birthday to you\n";
    cout << "Happy Birthday to you\n";
    cout << "Happy Birthday dear " << name << '\n';
    cout << "Happy Birthday to you\n";
    cout << "\nYou are " << age << " years old now!" << endl;
    }