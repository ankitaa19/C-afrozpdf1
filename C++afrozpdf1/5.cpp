//Write a c++ program that finds the largest among three numbers using nested if-else
#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;


    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << "The largest number is: " << num1 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << "The largest number is: " << num2 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    }

    return 0;
}