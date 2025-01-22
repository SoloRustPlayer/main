#include "Student.h"
#include <iostream>

int main() {
    Contact contact("123-456-789", "Kyiv", "Ukraine");
    Collage collage("Kyiv Polytechnic Institute", contact);
    Student student("Ivan Ivanov", "01.01.2000", contact, collage);

    std::cout << "Student Info:\n";
    student.Show();

    return 0;
}

