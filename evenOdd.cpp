#include <vector>
#include <stdio.h>
#include <iostream>

int main() {

    std::vector<int> evenOdd = {2,4,3,6,1,9};

    int evenSum = 0;
    int oddProduct = 1;

    for (int i = 0; i < evenOdd.size(); i++) {
        if(evenOdd[i] % 2 == 0) {
        evenSum += evenOdd[i];
        }
        else if (evenOdd[i] % 2 == 1) {
        oddProduct *= evenOdd[i];
        } 
    }

    std::cout << "The sum of the even numbers is: " << evenSum << "\n";
    std::cout << "The product of the odd numbers is: " << oddProduct << "\n";

    return 0;
}