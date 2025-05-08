
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
    int id;
    std::string name;
    float gpa;
    std::string major;
    Student* next;
    Student() : id(0), gpa(0.0), next(nullptr) {}
};

class StudentList {
private:
    Student* head;
public:
    StudentList();
    ~StudentList();
    void addStudent();
    // Displays all student records currently stored in the linked list
    void displayStudents();
    void searchByID();
    void saveToFile();
    void loadFromFile();
    void sortByGPA();
};

#endif
