//
// Created by Adrienn on 2025. 02. 26..
//

#include "utils.h"
#include <math.h>


bool isPrime(int number) {
    if (number < 2) return false;
    if (number == 2 || number == 3) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int number) {
    int original = number;
    int reversed = 0;
    if (number < 0) {
        return false;
    }
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return original == reversed;
}


