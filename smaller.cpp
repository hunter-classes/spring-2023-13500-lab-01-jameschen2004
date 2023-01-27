/* * Spring 2023 - Lab 01

* Last name: Chen

* First name: James

* GitHub username: jameschen2004

* Notes: Prompt user to type 2 numbers and the smaller number gets returned.
*/

#include <iostream>

int main(){
    int num1;
    int num2;
    std::cout << "Please enter a number. \n";
    std::cin >> num1;
    std::cout << "Please enter another number. \n";
    std::cin >> num2;
    if (num1 >= num2){
        std::cout << "The smaller number is " << num2 << ". \n";
    }
    else{
        std::cout << "The smaller number is " << num1 << ". \n";
    }
    return 0;
}