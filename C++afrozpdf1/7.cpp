//Write a c++  program to find the sum of digits of a number until it becomes a single-
//digit number.
#include <iostream>
using namespace std;

int main() {
    // Input a number
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Calculate the sum of digits until it becomes a single-digit number
    while (number >= 10) {
        int sum = 0;

  
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }

  
        number = sum;
    }

    // Display the result
    cout << "Sum of digits until it becomes a single-digit number: " << number << endl;

    return 0;
}