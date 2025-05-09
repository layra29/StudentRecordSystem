#include "Student.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

StudentList::StudentList() {
    head = nullptr;
}

StudentList::~StudentList() {
    Student* current = head;
    while (current != nullptr) {
        Student* toDelete = current;
        current = current->next;
        delete toDelete;
    }
}

void StudentList::addStudent() {
    Student* newStudent = new Student;
    cout << "Enter ID: ";
    cin >> newStudent->id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, newStudent->name);

    cout << "Enter GPA: ";
    cin >> newStudent->gpa;
    cin.ignore();

    cout << "Enter Major: ";
    getline(cin, newStudent->major);

    newStudent->next = head;
    head = newStudent;
}

void StudentList::displayStudents() const {
    if (!head) {
        cout << "No students to display.\n";
        return;
    }
    Student* current = head;
    while (current != nullptr) {
        cout << "\nID: " << current->id
            << "\nName: " << current->name
            << "\nGPA: " << current->gpa
            << "\nMajor: " << current->major << "\n";
        current = current->next;
    }
}

void StudentList::searchByID() const {
    int targetID;
    cout << "Enter ID to search: ";
    cin >> targetID;

    Student* current = head;
    while (current != nullptr) {
        if (current->id == targetID) {
            cout << "\nFound Student:\n"
                << "ID: " << current->id << "\n"
                << "Name: " << current->name << "\n"
                << "GPA: " << current->gpa << "\n"
                << "Major: " << current->major << "\n";
            return;
        }
        current = current->next;
    }
    cout << "Student not found.\n";
}

void StudentList::saveToFile() const {
    ofstream file("students.txt");
    Student* current = head;
    while (current != nullptr) {
        file << current->id << ',' << current->name << ','
            << current->gpa << ',' << current->major << '\n';
        current = current->next;
    }
    file.close();
    cout << "Data saved to students.txt\n";
}

void StudentList::loadFromFile() {
    ifstream file("students.txt");
    if (!file) {
        cout << "No saved file found.\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string idStr, name, gpaStr, major;

        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, gpaStr, ',');
        getline(ss, major);

        Student* newStudent = new Student;
        newStudent->id = stoi(idStr);
        newStudent->name = name;
        newStudent->gpa = stof(gpaStr);
        newStudent->major = major;

        newStudent->next = head;
        head = newStudent;
    }

    file.close();
    cout << "Data loaded from students.txt\n";
}

void StudentList::sortByGPA() {
    if (!head || !head->next) return;

    bool swapped;
    do {
        swapped = false;
        Student* current = head;

        while (current->next != nullptr) {
            if (current->gpa < current->next->gpa) {
                swap(current->id, current->next->id);
                swap(current->name, current->next->name);
                swap(current->gpa, current->next->gpa);
                swap(current->major, current->next->major);
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);

    cout << "Student list sorted by GPA (descending).\n";
    displayStudents(); // Optional
}