#include "Student.h"
#include <iostream>
#include <fstream>

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

void StudentList::displayStudents() {
    Student* current = head;
    while (current != nullptr) {
        cout << "\nID: " << current->id;
        cout << "\nName: " << current->name;
        cout << "\nGPA: " << current->gpa;
        cout << "\nMajor: " << current->major << "\n";
        current = current->next;
    }
}

void StudentList::searchByID() {
    int targetID;
    cout << "Enter ID to search: ";
    cin >> targetID;
    Student* current = head;
    while (current != nullptr) {
        if (current->id == targetID) {
            cout << "Found Student:\n";
            cout << "ID: " << current->id << "\n";
            cout << "Name: " << current->name << "\n";
            cout << "GPA: " << current->gpa << "\n";
            cout << "Major: " << current->major << "\n";
            return;
        }
        current = current->next;
    }
    cout << "Student not found.\n";
}

void StudentList::saveToFile() {
    ofstream file("students.txt");
    Student* current = head;
    while (current != nullptr) {
        file << current->id << ',' << current->name << ',' << current->gpa << ',' << current->major << '\n';
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
        Student* newStudent = new Student;
        size_t pos1 = line.find(',');
        size_t pos2 = line.find(',', pos1 + 1);
        size_t pos3 = line.find(',', pos2 + 1);
        newStudent->id = stoi(line.substr(0, pos1));
        newStudent->name = line.substr(pos1 + 1, pos2 - pos1 - 1);
        newStudent->gpa = stof(line.substr(pos2 + 1, pos3 - pos2 - 1));
        newStudent->major = line.substr(pos3 + 1);
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
    displayStudents(); // <--- This is the only line to ADD
}