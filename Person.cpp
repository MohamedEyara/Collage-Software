#include "Person.h"#include "Person.h"
#include <iostream>

using namespace std;

// ================= Person =================
Person::Person() : password(0), id(0) {}

Person::Person(const string& firstName, const string& lastName, int password, int id)
    : firstName(firstName), lastName(lastName), password(password), id(id) {
}

// Setters
void Person::setFirstName(const string& firstName) {
    this->firstName = firstName;
}

void Person::setLastName(const string& lastName) {
    this->lastName = lastName;
}

void Person::setPassword(int password) {
    this->password = password;
}

void Person::setId(int id) {
    this->id = id;
}

// Getters
string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

string Person::getName() const {
    return firstName + " " + lastName;
}

int Person::getPassword() const {
    return password;
}

int Person::getId() const {
    return id;
}

void Person::printInfo() const {
    cout << "Name     : " << getName() << endl;
    cout << "Password : " << password << endl;
    cout << "ID       : " << id << endl;
}
