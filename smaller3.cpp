/* * Spring 2023 - Lab 01

* Last name: Chen

* First name: James

* GitHub username: jameschen2004

* Notes: Prompt user to type 3 numbers and the smallest number gets returned.
*/

#include <iostream>

int main(){
    int num1;
    int num2;
    int num3;
    std::cout << "Please enter a number. \n";
    std::cin >> num1;
    std::cout << "Please enter another number. \n";
    std::cin >> num2;
    std::cout << "Please enter the last number. \n";
    std::cin >> num3;
    if (num1 <= num2 && num1 <= num3){
        std::cout << "The smallest number is " << num1 << ". \n";
    }
    else if (num2 <= num1 && num2 <= num3){
        std::cout << "The smallest number is " << num2 << ". \n";
    }
    else{
        std::cout << "The smallest number is " << num3 << ". \n";
    }
    return 0;
}