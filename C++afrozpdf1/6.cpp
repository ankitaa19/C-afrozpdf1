#include <iostream>
using namespace std;

int main() {
    // Input marks for 5 subjects
    int marks1, marks2, marks3, marks4, marks5;

    cout << "Enter marks for 5 subjects (out of 100 each):\n";
    cout << "Subject 1: ";
    cin >> marks1;
    cout << "Subject 2: ";
    cin >> marks2;
    cout << "Subject 3: ";
    cin >> marks3;
    cout << "Subject 4: ";
    cin >> marks4;
    cout << "Subject 5: ";
    cin >> marks5;

    // Calculate average marks
    double averageMarks = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0;

    // if-else-if ladder
    char grade;

    if (averageMarks >= 90) {
        grade = 'A';
    } else if (averageMarks >= 80) {
        grade = 'B';
    } else if (averageMarks >= 70) {
        grade = 'C';
    } else if (averageMarks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Display the result
    cout << "Average Marks: " << averageMarks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
