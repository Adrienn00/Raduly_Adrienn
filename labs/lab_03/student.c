//
// Created by Adrienn on 2025. 03. 05..
//

#include "student.h"

void readStudentDetails(Student_t *pStudent) {
    scanf("%s", pStudent->name);
    scanf("%s", pStudent->neptunCode);
    scanf("%s", pStudent->birthPlace);
    scanf("%d%d%d", &pStudent->birthDate.year, &pStudent->birthDate.month, &pStudent->birthDate.day );
    scanf("%d", &pStudent->gender);
    scanf("%f", &pStudent->examResult);
}

void printStudent(Student_t student) {
    printf("The student dates: \n");
    printf("Name: %s\n", student.name);
    printf("Neptune Code: %s\n", student.neptunCode);
    printf("Birth Place: %s\n", student.birthPlace);
    printf("Date of birth: %d.%d.%d.\n", student.birthDate.year, student.birthDate.month, student.birthDate.day);
    if(student.gender == 0){
    printf("Gender : man\n");
    }
    else
        printf("Gender : woman\n");
    printf("Exam Results: %.2f\n", student.examResult);
}
