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
    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue;
            //break;
        }
        cout << i << '\n';

    }



    std::cout << "\n";
    return 0;
}