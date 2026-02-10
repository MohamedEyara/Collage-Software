#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ================= Person =================
class Person {
protected:
    string firstName;
    string lastName;
    int password;
    int id;

public:
    Person() : password(0), id(0) {}

    Person(const string& firstName, const string& lastName, int password, int id)
        : firstName(firstName), lastName(lastName), password(password), id(id) {
    }

    // Setters
    void setFirstName(const string& firstName) { this->firstName = firstName; }
    void setLastName(const string& lastName) { this->lastName = lastName; }
    void setPassword(int password) { this->password = password; }
    void setId(int id) { this->id = id; }

    // Getters
    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getName() const { return firstName + " " + lastName; }
    int getPassword() const { return password; }
    int getId() const { return id; }

    virtual void printInfo() const {
        cout << "Name     : " << getName() << endl;
        cout << "Password : " << password << endl;
        cout << "ID       : " << id << endl;
    }
};

// ================= Instructor =================
class Instructor : public Person {
public:
    Instructor() : Person() {}

    Instructor(const string& firstName, const string& lastName, int password, int id)
        : Person(firstName, lastName, password, id) {
    }
};

// ================= Student =================
class Student : public Person {
public:
    Student() : Person() {}

    Student(const string& firstName, const string& lastName, int password, int id)
        : Person(firstName, lastName, password, id) {
    }
};

// ================= Course =================
class Course {
private:
    string name;
    int id;
    Instructor instructor;
    vector<Student> students;

public:
    void setName(const string& name) { this->name = name; }
    void setId(int id) { this->id = id; }
    void setInstructor(const Instructor& instructor) { this->instructor = instructor; }
    void addStudent(const Student& student) { students.push_back(student); }

    string getName() const { return name; }
    int getId() const { return id; }

    void studentsInfo() const {
        for (size_t i = 0; i < students.size(); i++) {
            cout << "Student No. " << i + 1 << endl;
            students[i].printInfo();
            cout << "---------------------------\n";
        }
    }

    void courseInfo() const {
        cout << "Course Name: " << name << endl;
        cout << "Course ID  : " << id << endl;
        cout << "============================\n";
        cout << "Instructor Info:\n";
        instructor.printInfo();
        cout << "============================\n";
        studentsInfo();
    }
};
