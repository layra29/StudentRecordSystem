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
    // Constructor: Initializes an empty student list
    StudentList();

    // Destructor: Frees memory used by the list
    ~StudentList();

    /**
     * Adds a new student to the list with user input.
     */
    void addStudent();

    /**
     * Displays all student records currently stored in the linked list.
     */
    void displayStudents();

    /**
     * Searches for a student using their ID.
     */
    void searchByID();

    /**
     * Saves all student records to a file ("students.txt").
     */
    void saveToFile();

    /**
     * Loads student records from a file ("students.txt").
     */
    void loadFromFile();

    /**
     * Sorts student records by GPA in descending order using Bubble Sort.
     */
    void sortByGPA();

    // TODO: Add update and delete functionality
    // TODO: Convert struct to class for better encapsulation
};

#endif

