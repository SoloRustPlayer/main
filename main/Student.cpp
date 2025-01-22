#include "Student.h"
#include <iostream>

char* Student::copyString(const char* source) {
    int length = 0;
    while (source[length] != '\0') length++;
    char* result = new char[length + 1];
    for (int i = 0; i < length; i++) {
        result[i] = source[i];
    }
    result[length] = '\0';
    return result;
}

Student::Student(const char* fullName, const char* birthDate,
    const Contact& contact, const Collage& collage)
    : contact(contact), collage(collage) {
    this->fullName = copyString(fullName);
    this->birthDate = copyString(birthDate);
}

Student::~Student() {
    delete[] fullName;
    delete[] birthDate;
}

void Student::Show() const {
    std::cout << "Full Name: " << fullName << "\n"
        << "Birth Date: " << birthDate << "\n";
    std::cout << "Contact Info:\n";
    contact.Show();
    std::cout << "Collage Info:\n";
    collage.Show();
}
