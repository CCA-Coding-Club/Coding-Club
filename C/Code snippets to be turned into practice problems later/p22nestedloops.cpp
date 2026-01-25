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
    
    int rows;
    int columns;
    char symbol;

    cout << "How many rows?: ";
    cin >> rows;
    cout << "How many columns?: ";
    cin >> columns;
    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
        cout << symbol << ' ';
    }
        cout << '\n';
    }

    


    std::cout << "\n";
    return 0;
}