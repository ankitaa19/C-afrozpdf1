#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    const int size = 5;  
    string names[size];

    // Input names into the array
    cout << "Enter " << size << " names:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Name " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    // Sort the array of strings in alphabetical order
    sort(names, names + size);

    // Display the names in alphabetical order
    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < size; ++i) {
        cout << names[i] << endl;
    }

    return 0;
}