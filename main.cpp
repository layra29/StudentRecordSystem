#include <iostream>
#include "Student.h"
using namespace std;

// Function to display the main menu
void displayMenu() {
    cout << "\nStudent Record Management System\n";
    cout << "1. Add Student\n";
    cout << "2. Display Students\n";
    cout << "3. Search by ID\n";
    cout << "4. Save to File\n";
    cout << "5. Load from File\n";
    cout << "6. Sort by GPA\n";
    cout << "0. Exit\n";
    cout << "Enter choice: ";
}

int main() {
    StudentList list;
    int choice;

    do {
        displayMenu();

        // Input validation
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (choice) {
        case 1:
            list.addStudent();
            break;
        case 2:
            list.displayStudents();
            break;
        case 3:
            list.searchByID();
            break;
        case 4:
            list.saveToFile();
            break;
        case 5:
            list.loadFromFile();
            break;
        case 6:
            list.sortByGPA();
            cout << "Sorted list by GPA:\n";
            list.displayStudents();
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please select a valid option.\n";
        }

        cin.ignore(); // clear newline from buffer

    } while (choice != 0);

    return 0;
}