#include <iostream>
//#include <ctime>

//for terminal commands system("etc.")
//#include <cstdlib>

//#include <iomanip>
//relevant functions: std::cin.clear(); fflush(stdin);

//template used
//Functions
double getTotal(double prices[], int size);
//Here are some neat namespaces to consider using consistantly
using std::cout;
using std::string;
using std::cin;
using std::endl;
//etc.

int main() {

    std::cout << "\n";
    double prices[] = {56.05, 93.23, 5.00, 6.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    cout << "$" << total;

    return 0;
}
double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}