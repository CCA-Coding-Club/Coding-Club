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

    int number;
    /*
    cout << "Enter a positive #: ";
    cin >> number;
    while(number < 0){
        cout << "Enter a positive #: ";
        cin >> number;
    }

    
    */
    do{
        cout << "Enter a positive #: ";
        cin >> number;
    }while(number < 0);

    cout << "The # is: " << number;

    std::cout << "\n";
    return 0;
}