#include <iostream>
//#include <ctime>
//template used

//Here are some neat namespaces to consider using consistantly
using std::cout;
using std::string;
using std::cin;
using std::endl;
//etc.
void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main() {



    std::cout << "\n";

    bakePizza();

    std::cout << "\n";
    return 0;
}
void bakePizza(){
    cout << "Here is your pizza!\n";
}
void bakePizza(string topping1){
    cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(string topping1, string topping2){
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}