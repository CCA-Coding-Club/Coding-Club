#include <iostream>
//#include <ctime>
#include <iomanip>
#include <cstdlib>
//template used

//Here are some neat namespaces to consider using consistantly
using std::cout;
using std::string;
using std::cin;
using std::endl;
//etc.
void showBalance(double balance);
double deposit();
double withdraw(double balance);
double balance = 0;

int main() {



    std::cout << "\n";
    int choice = 0;

   
    do{
    

    cout << "Enter your choice:\n";
    cout << "1. Show Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";

    cin >> choice;
    system("cls");

    //to prevent errors
    std::cin.clear();
    fflush(stdin);

    switch(choice){
    case 1: showBalance(balance);
                break;
    case 2: balance += deposit();
                break;
    case 3:balance -= withdraw(balance);
                break;
    case 4: cout << "Thanks for visiting!\n";
                break;
    default: cout << "Invalid input\n";
                break;
    }
    }while(choice != 4);
    

    std::cout << "\n";
    return 0;
}
void showBalance(double balance){
    cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << endl;
}
double deposit(){
    double amount = 0;
    cout << "Enter amount to be deposited: ";
    cin >> amount;
    if(amount > 0){
        ::balance += amount;
    }
    else{
        cout << "That isn't a valid amount.\n";
    }
    return 0;
}
double withdraw(double balance){
    double amount = 0;

    cout << "Enter amount to be withdrawn: ";
    cin >> amount;
    if(amount > 0 and amount < ::balance){
        ::balance -= amount;
        cout << endl << amount << "$ withdrawn\n";
    }
    else{
        cout << "That isn't a valid amount.\n";
    }
    return 0;
}