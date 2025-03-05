#include <stdio.h>
#include "student.h"

int main(void) {
    Student_t student = {
            "Kovacs Peter",
            "ABC1234",
            "Budapest",
            {2000, 5, 15},
            MALE,
            87.5
    };
    printStudent(student);

    return 0;
}
