#include <iostream>
#include <string>
using namespace std;

int main() {
    // ========================
    // Part 1 – Basic Input/Output
    // ========================
    string name;
    int grade1, grade2;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter grade 1: ";
    cin >> grade1;

    cout << "Enter grade 2: ";
    cin >> grade2;

    cout << "\nName: " << name << endl;
    cout << "Grade 1: " << grade1 << endl;
    cout << "Grade 2: " << grade2 << endl;

    // ========================
    // Part 2 – Arithmetic & Expressions
    // ========================
    int total;
    double average;

    total = grade1 + grade2;
    average = total / 2.0;

    cout << "\nTotal = " << total << endl;
    cout << "Average = " << average << endl;

    // ========================
    // Part 3 – Constants & Escape Sequences
    // ========================
    const int MAX_SCORE = 100;

    cout << "\nGrade 1: " << grade1
         << " out of " << MAX_SCORE << endl;

    cout << "Grade 2: " << grade2
         << " out of " << MAX_SCORE << endl;

    // ========================
    // Part 4 – Increment/Decrement
    // ========================
    int counter = 0;

    cout << "\nInitial counter = " << counter << endl;

    cout << "counter++ gives "
         << counter++
         << ", now counter = "
         << counter << endl;

    cout << "++counter gives "
         << ++counter
         << ", now counter = "
         << counter << endl;

    return 0;
}
