#include "Contact.h"
#include <iostream>

char* Contact::copyString(const char* source) {
    int length = 0;
    while (source[length] != '\0') length++;
    char* result = new char[length + 1];
    for (int i = 0; i < length; i++) {
        result[i] = source[i];
    }
    result[length] = '\0';
    return result;
}

Contact::Contact(const char* phone, const char* city, const char* country) {
    this->phone = copyString(phone);
    this->city = copyString(city);
    this->country = copyString(country);
}

Contact::~Contact() {
    delete[] phone;
    delete[] city;
    delete[] country;
}

void Contact::Show() const {
    std::cout << "Phone: " << phone << "\n"
        << "City: " << city << "\n"
        << "Country: " << country << "\n";
}
