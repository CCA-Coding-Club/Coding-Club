#include <iostream>
//template used
int main() {
    std::cout << "\n";
    double x = (int) 3.14;
    //ascii 100 is the same as the letter d
    char a = 100;

    std::cout << x << a << "\n";

    std::cout << (char) 120;

    std::cout << "\n";
//grading
int correct = 8;
int questions = 10;
double score = correct / (double)questions * 100;
std::cout << "Your percentage score is " << score << "%";

    return 0;
}