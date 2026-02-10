#include <iostream>
#include <string>
#include <vector>
#include "Person.h"

using namespace std;

int main()
{
    // Create instructor
    Instructor inst("Ahmed", "Khaled", 1234, 1);

    // Create students
    Student s1("Mohamed", "Ibrahim", 1111, 101);
    Student s2("Sara", "Ali", 2222, 102);
    Student s3("Omar", "Hassan", 3333, 103);

    // Create course
    Course c1;
    c1.setName("C++ Programming");
    c1.setId(5001);
    c1.setInstructor(inst);

    // Add students
    c1.addStudent(s1);
    c1.addStudent(s2);
    c1.addStudent(s3);

    // Print course information
    c1.courseInfo();

    return 0;
}
