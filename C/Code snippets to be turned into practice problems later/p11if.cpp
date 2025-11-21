#include <iostream>
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
    int age;

    cout << "Enter your age: ";
    cin >> age;
    if(age >= 100){
        cout << "You are to old to enter this site!";
    }
    else if(age >= 18){
        cout << "Welcome to the site!";
    }
    else if(age < 0){
        cout << "You haven't been born yet!";
    }
    
    else{
        cout << "You are not old enough to enter!";
    }

    std::cout << "\n";
    return 0;
}