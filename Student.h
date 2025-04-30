
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
    int id;
    std::string name;
    float gpa;
    std::string major;
    Student* next;
};

class StudentList {
private:
    Student* head;
public:
    StudentList();
    ~StudentList();
    void addStudent();
    void displayStudents();
    void searchByID();
    void saveToFile();
    void loadFromFile();
    void sortByGPA();
};

#endif
