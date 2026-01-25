/*
For more string stuff visit
https://cplusplus.com/reference/string/string/?kw=string
*/

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
    string name;

    cout << "Enter your name: \n";
    std::getline(cin, name);

    if(name.empty()){
        cout << "You didn't enter your name";
    }
    else{
        cout << "Hello " << name << '\n';
        //cout << name.find(' ') << endl;
        //name.erase(name.find(' '));
    
        if(name.length() > 12){
            cout << "Your name can't be over 12 characters.";
            return 1;
        }
        else{
            cout << "Welcome " << name << endl;
        }

        //append and empty a string
        string email = "@string.com";
        email.at(2) = name.at(1);
        name.append(email);
        cout << "Your email is " << name << endl;

        name.clear();
        cout << "Oh my you've disappeared " << name << "!\n";
    }
    //x.insert(position,inserted string)
    name.insert(0, " uh oh ");
    cout << name << endl;
    std::cout << "\n";
    return 0;
}