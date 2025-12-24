#include <iostream>
#include <ctime>
//template used
int main() {

    //Here are some neat namespaces to consider using consistantly
    using std::cout;
    using std::string;
    using std::cin;
    using std::endl;
    //etc.

    std::cout << "\n";
    srand(time(0));
    int randNum = rand() % 5 + 1;
    
    switch(randNum){
        case 1: cout << "You win a bumper sticker!\n";
            break;
        case 2: cout << "You win a t-shirt!\n";
            break;
        case 3: cout << "You win a free lunch!\n";
            break;
        case 4: cout << "You win a gift card!\n";
            break;
        case 5: cout << "You win concert tickets!\n";
            break;
    }


    std::cout << "\n";
    return 0;
}