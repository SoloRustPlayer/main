#ifndef STUDENT_H
#define STUDENT_H

#include "Contact.h"
#include "Collage.h"

class Student {
private:
    char* fullName;
    char* birthDate;
    Contact contact;
    Collage collage;

    char* copyString(const char* source);

public:
    Student(const char* fullName = "", const char* birthDate = "",
        const Contact& contact = Contact(), const Collage& collage = Collage());
    ~Student();
    void Show() const;
};

#endif
