/** Spring 2023 - Lab 01

* Last name: Chen

* First name: James

* GitHub username: jameschen2004

* Notes: Prompts user to enter a year followed by month, 
then the number of days of the corresponding month is returned.
(without using arrays or switch)
*/

#include <iostream>

int main(){
    int year;
    int month;
    bool leap_year;
    std::cout << "Please enter a year. \n";
    std::cin >> year;
    if ((year % 4) == 0){
        if ((year % 100) == 0){
            if ((year % 400) == 0){
                leap_year = true;
            }
            else{
                leap_year = false;
            }}
        else{
            leap_year = true;
        }}
    else{
        leap_year = false;
    }
    std::cout << "Please enter a numerical month. \n";
    std::cin >> month;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        std::cout << "31" << std::endl;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        std::cout << "30" << std::endl;
    }
    else{
        if (month == 2 && leap_year == true){
            std::cout << "29" << std::endl;
        }
        if (month == 2 && leap_year == false){
            std::cout << "28" << std::endl;
        }
    }
    return 0;
}