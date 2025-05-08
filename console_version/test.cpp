#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    StudentList list;

    cout << "Testing: Add 2 students manually\n";
    list.addStudent();  // You will be prompted for input in console
    list.addStudent();  // Add second student

    cout << "\nTesting: Display students (unsorted)\n";
    list.displayStudents();

    cout << "\nTesting: Sort by GPA\n";
    list.sortByGPA();

    cout << "\nTesting: Display students (sorted by GPA)\n";
    list.displayStudents();

    cout << "\nTesting: Search by ID (enter an ID you just added)\n";
    list.searchByID();  // You will be prompted to enter ID

    return 0;
}