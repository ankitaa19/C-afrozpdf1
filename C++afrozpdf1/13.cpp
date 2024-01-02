#include <iostream>
using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void generatePermutations(string str, int index = 0) {
    if (index == str.size() - 1) {
        cout << str << endl;  
    } else {
        for (int i = index; i < str.size(); ++i) {
            swap(str[index], str[i]);
            generatePermutations(str, index + 1);  
            swap(str[index], str[i]);  
        }
    }
}

int main() {
    string inputStr;

    cout << "Enter a string: ";
    cin >> inputStr;

    //Display all permutations
    cout << "All permutations of the string:\n";
    generatePermutations(inputStr);

    return 0;
}