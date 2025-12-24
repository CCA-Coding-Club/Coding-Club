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
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "******NUMBER GUESSING GAME ********\n";
    do{
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;
        if(guess > num){
            cout << "Too high!\n";
        }
        else if(guess < num){
            cout << "Too low!\n";
        }
        else{
            cout << "\nYou guessed the right # in " << tries << " tries!\n";
        }
    }while(guess != num);

    cout << "\n*****************************************\n";

    std::cout << "\n";
    return 0;
}