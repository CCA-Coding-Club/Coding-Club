#include <iostream>
//template used
int main() {

    //Here are some neat namespaces to consider using consistantly
    using std::cout;
    using std::string;
    using std::cin;
    using std::endl;
    //etc.
    int temp;
    bool sunny;

    std::cout << "\n";
    cout << "Enter the temperature: \n";
    cin >> temp;
    cout << "Is it sunny?: true, false\n";

    //Change these out if you want to use true and false as inputs
    //cin >> std::boolalpha >> sunny;
    cin >> sunny;

    //if(temp <= 0 || temp >= 30){
    if(!(temp > 0 && temp < 30)){
        cout << "The temperature is bad!\n";
    }
    else{
        cout << "The temperature is good.\n";
    }

    if(sunny){
        cout << "It is sunny outside!";
    }
    else{
        cout << "It is darker out.";
    }

    std::cout << "\n";
    return 0;
}