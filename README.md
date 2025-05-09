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
