/** Spring 2023 - Lab 01

* Last name: Chen

* First name: James

* GitHub username: jameschen2004

* Notes:
*/
#include <iostream>

int main(){
    int year;
    std::cout << "Please enter a year. \n";
    std::cin >> year;
    if ((year % 4) == 0){
        if ((year % 100) == 0){
            if ((year % 400) == 0){
                std::cout << "Leap year \n";
            }
            else{
                std::cout << "Common year \n";
            }}
        else{
            std::cout << "Leap year \n";
        }}
    else{
        std::cout << "Common year \n";
    }

    return 0;
}