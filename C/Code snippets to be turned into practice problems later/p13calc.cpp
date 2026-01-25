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
    char op;
    double num1;
    double num2;
    double result;

    cout << "**Calculator**\n";
    cout << "enter either (+ - * /): ";
    cin >> op;
    cout << "Enter #1: ";
    cin >> num1;
    cout << "Enter #2: ";
    cin >> num2;
    switch(op){
        case '+':
            result = num1 + num2;
            cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "result: " << result << '\n';
            break;
        default:
            cout << "That wasn't a valid response.\n";
            break;
    }


    std::cout << "\n";
    return 0;
}