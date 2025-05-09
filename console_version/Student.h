#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float gpa;
    string major;
    Student* next;
};

class StudentList {
private:
    Student* head;

public:
    StudentList();
    ~StudentList();
    void addStudent();
    void displayStudents() const;
    void searchByID() const;
    void saveToFile() const;
    void loadFromFile();
    void sortByGPA();
};

#endif

