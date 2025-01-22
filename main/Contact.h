#ifndef CONTACT_H
#define CONTACT_H

class Contact {
private:
    char* phone;
    char* city;
    char* country;

    char* copyString(const char* source);

public:
    Contact(const char* phone = "", const char* city = "", const char* country = "");
    ~Contact();
    void Show() const;
};

#endif
