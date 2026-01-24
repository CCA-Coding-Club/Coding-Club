#include <iostream>
//#include <ctime>
#include <cstdlib>
#include <iomanip>
//template used

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
//Here are some neat namespaces to consider using consistantly
using std::cout;
using std::string;
using std::cin;
using std::endl;
//etc.

int main() {
    char player;
    char computer;
    player = getUserChoice();
    computer = getComputerChoice();

    std::cout << "\n";
    cout<< "Your Choice:\n";
    showChoice(player);
    cout << "Computer's choice:\n";
    showChoice(computer);
    chooseWinner(player, computer);

    std::cout << "\n";
    return 0;
}
char getUserChoice(){
    char player;
    cout << "Rock, Paper, Scissors, Shoot!\n";
    do{
        //std::cin.clear();
        //fflush(stdin);
        system("cls");
        cout << "'r' for rock\n'p' for paper\n's' for scissors\n";
        cin >> player;
        system("cls");
    }while(player != 'r' && player != 'p' && player != 's' );
    return player;

}
char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r': cout << "Rock\n";
            break;
        case 'p': cout << "Paper\n";
            break;
        case 's': cout << "Scissors\n";
            break;
    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){
            cout << "Tie.\n";
        } else if(computer == 'p'){
            cout << "You lose.\n";
        } else if(computer == 's'){
            cout << "Congraturaisons! You beat the computer!\n";
        } break;

        case 'p': if(computer == 'r'){
            cout << "Congraturaisons! You beat the computer!\n";
        } else if(computer == 'p'){
            cout << "Tie\n";
        } else if(computer == 's'){
            cout << "You lose.\n";
        } break;

        case 's': if(computer == 'r'){
            cout << "You lose.\n";
        } else if(computer == 'p'){
            cout << "Congraturaisons! You beat the computer!\n";
        } else if(computer == 's'){
            cout << "Tie\n";
        } break;
    }
}