#ifndef COLLAGE_H
#define COLLAGE_H

#include "Contact.h"

class Collage {
private:
    char* name;
    Contact contact;

    char* copyString(const char* source);

public:
    Collage(const char* name = "", const Contact& contact = Contact());
    ~Collage();
    void Show() const;
};

#endif
