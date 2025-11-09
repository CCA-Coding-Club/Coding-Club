#include <iostream>
//template used
int main() {
    //code follows standard pemdas
    std::cout << "\n";
    double students = 6 - (5 + 4) * 3 / 2;
    std::cout << students << "\n";
    //These ++ and +=1 are the same
    students+=1;
    students++;
    std::cout << students << "\n";

    //-=1 is the same as -- but not -=2
    students-=1;
    students = students - 1;
    students --;
    std::cout <<students << "\n";
    //multiplication and division
    students = students * 2;
    students*=2;
    students = students / 3;
    students/=3;
    std::cout << students << "\n";
    //modulus
    int remainder = (int)students % 2;
    std::cout << remainder << "\n";

    std::cout << "\n";
    return 0;
}