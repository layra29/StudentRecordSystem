# Student Record System

## Overview
This project is a C++ application designed to manage student records using both a *console-based interface* and a *GUI version* (built with Windows Forms). The system allows users to:

Add new student records  
Display all students  
Search by student ID  
Save records to a file  
Load records from a file  
Sort students by GPA (descending)


The project demonstrates key C++ concepts including:
Pointers and dynamic memory
File I/O using streams
Linked list data structures
Object-oriented programming (classes)
Bubble Sort
Windows Forms GUI design


---

## How to Compile and Run

### Console Version:
1. Open the console_version folder in *Visual Studio*  
2. Open the .sln file and *build the solution* (Ctrl + Shift + B)  
3. Press F5 or click *Start* to run the console-based application

### GUI Version:
1. Open the gui_version folder in *Visual Studio*
2. Launch the .sln file, build the project, and run the program to launch the Windows Forms application

---

## Files and Structure

### Console Version:
- main.cpp – Main menu logic and user interaction
- Student.h – Contains student struct and list class declarations
- student.cpp – Implements student-related functions
- students.txt – Stores student data (used for load/save)
- test.cpp
 – Additional test cases
![Screenshot 2025-05-08 193013](https://github.com/user-attachments/assets/25e2910f-9ea2-4d5f-aba8-99a7e68ab2db)
  

### GUI Version:
- Mainform.h/.cpp/.resx – Visual layout and logic for the form
- Student.h – Reused header file from console version
- Student.cpp – Student data logic for GUI version
- .vcxproj files – Visual Studio project settings
![gui](https://github.com/user-attachments/assets/24cf57d7-77cb-4a92-8daa-6abdd41d403b)
---
## Testing and Test Cases

### Console Version – Test Cases

| Test Case       | Input                                   | Expected Output         | Actual Output           | Result |
|-----------------|-----------------------------------------|--------------------------|--------------------------|--------|
| Add Student     | ID: 101, Name: Alex, GPA: 3.5, Major: CS | Student added to list   | Student added            | Pass   |
| Search by ID    | ID: 101                                 | Student: Alex displayed | Alex displayed           | Pass   |
| Invalid GPA     | GPA: -1                                 | Show error / reject input| Error shown             | Pass   |
| Load from file  | students.txt with valid data            | Load success            | Records loaded           | Pass   |

---

### GUI Version – Manual Testing Summary

- *Add Student*: Fields correctly capture data and display it in the grid.  
- *Search by ID*: Displays correct student when valid ID is entered.  
- *Edge Cases*: Empty fields, invalid GPA, or duplicate IDs are handled properly with appropriate messages or restrictions.

---

### Edge Case Handling

The program was tested for edge cases such as:
- Empty input fields  
- Invalid numeric entries (e.g., GPA < 0 or > 4.0)  
- Duplicate IDs  
- Loading from a non-existent file  


In all cases, the program handled errors gracefully without crashing.

## Author

*Nistha Aryal*  
*Mohammad Nemer*  
Chaffey College — COMPSCI-2

---

## Future Improvements
Add update/delete student record functionality  
Implement file format validation  
Create more advanced graphical UI (e.g., using Qt or .NET MAUI)  
Store records in a database instead of a text file


---
