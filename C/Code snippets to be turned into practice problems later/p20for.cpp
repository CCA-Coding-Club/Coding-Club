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
    for(int index = 10; index >= 0; index--){
        cout << index << '\n';
    }
    cout << "Merry Christmas!\n";


    std::cout << "\n";
    return 0;
}