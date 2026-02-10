# College Course Management System in C++

A simple **College Course Management System** implemented in C++ using **Object-Oriented Programming (OOP)** concepts.  
This project demonstrates handling instructors, students, and courses, including basic operations like adding students, assigning instructors, and displaying course information.

---

## **Description**

This project simulates a basic college management system where:

- **Instructors** can be assigned to courses.
- **Students** can be enrolled in courses.
- The system displays detailed course information, including instructor and enrolled students.

The system uses **OOP principles** including inheritance, encapsulation, and composition.  
It also includes **data encapsulation** and clean console-based output.

---

## **Features**

- Create **Instructor and Student objects**
- Create **Course objects** and assign instructors
- Add multiple students to a course
- Display full course information:
  - Course name and ID
  - Instructor info
  - Enrolled students with their info
- Clean console-based interface

---

## **File Structure**

- `main.cpp` – Entry point, demonstrates course creation and operations.
- `Person.h` – Contains class definitions (`Person`, `Instructor`, `Student`, `Course`).
- `Person.cpp` – Contains class implementations for `Person` methods.

---

## **Requirements**

- C++ compiler (e.g., g++, Visual Studio, Code::Blocks)
- Basic knowledge of OOP in C++

---

## **How to Compile and Run**

Using **g++**:

```bash
g++ main.cpp Person.cpp -o CollegeSoftware
./CollegeSoftware   # Linux/macOS
CollegeSoftware.exe # Windows
