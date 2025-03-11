//
// Created by Adrienn on 2025. 03. 05..
//

#include "student.h"

void readStudentDetails(Student_t *pStudent) {
    scanf(" %[^\n]", pStudent->name);
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

void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents) {
    *dpStudents = (Student_t *) malloc(numberOfStudents * sizeof (Student_t));
    if(!(*dpStudents)){
        printf("Memory allocation error");
        exit(-1);
    }
}

void readAllStudentsDetails(Student_t **dpStudents, int *numberOfStudents, const char *input) {
    if(!freopen(input,"r", stdin)){
        printf("Input file error");
        exit(-1);
    }
    scanf("%i", numberOfStudents);
    allocateMemoryForStudents(dpStudents,*numberOfStudents);
    for (int i = 0; i < *numberOfStudents; ++i) {
        readStudentDetails(&((*dpStudents)[i]));
    }
    freopen("CON","r",stdin);
}

void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination) {
    freopen(destination,"w",stdout);
    for (int i = 0; i < numberOfStudents; ++i) {
        printStudent(pStudents[i]);
    }
    printf("\n");
    freopen("CON","w",stdout);
}

void calculatePercentageBoysGirls(Student_t **dpStudents, int numberOfStudents) {
    int girls = 0;
    int boys = 0;
    for (int i = 0; i < numberOfStudents; ++i) {
        if ((*dpStudents)[i].gender == MALE){
            boys ++;
        } else {
            girls++;
        }
    }
    float boysPercentage = (boys*100.0f) / numberOfStudents;
    float girlsPercentage = (girls*100.0f) / numberOfStudents;
    printf("Boys percentage: %2.2f\n",boysPercentage);
    printf("Girls percentage: %2.2f\n",girlsPercentage);
}



