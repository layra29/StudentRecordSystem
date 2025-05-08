#ifndef STUDENT_H
#define STUDENT_H

#include <string>

/**
 * Represents a student with ID, name, GPA, and major.
 */
struct Student {
    int id;
    std::string name;
    float gpa;
    std::string major;
    Student* next;

    // Constructor to initialize student values
    Student() : id(0), gpa(0.0), next(nullptr) {}
};

/**
 * Manages a singly linked list of student records.
 * Supports adding, searching, displaying, sorting, saving, and loading.
 */
class StudentList {
private:
    Student* head;  // Pointer to the first student in the list

public:
    void clear();
    StudentList();
    ~StudentList();
    void addStudentDirect(Student* student);

    void addStudent();
    void displayStudents();
    void searchByID();
    void saveToFile();
    void loadFromFile();
    void sortByGPA();

    std::string displayStudentsToString();  // <-- Make sure this is here
    Student* getHead() const;
};

#endif

Student* getHead(); // Add to public section
