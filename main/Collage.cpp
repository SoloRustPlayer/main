#include "Collage.h"
#include <iostream>

char* Collage::copyString(const char* source) {
    int length = 0;
    while (source[length] != '\0') length++;
    char* result = new char[length + 1];
    for (int i = 0; i < length; i++) {
        result[i] = source[i];
    }
    result[length] = '\0';
    return result;
}

Collage::Collage(const char* name, const Contact& contact) : contact(contact) {
    this->name = copyString(name);
}

Collage::~Collage() {
    delete[] name;
}

void Collage::Show() const {
    std::cout << "Collage Name: " << name << "\n";
    contact.Show();
}
