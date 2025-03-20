//
// Created by Adrienn on 2025. 03. 05..
//

#ifndef LAB_03_STUDENT_H
#define LAB_03_STUDENT_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef  enum {MALE,FEMALE} Gender_t;
typedef struct Date{
    int year,month,day;
}Date_t;
typedef struct Student{
    char name[50];
    char neptunCode[8];
    char birthPlace[25];
    Date_t birthDate;
    Gender_t gender;
    float examResult;
} Student_t;

void readStudentDetails(Student_t *pStudent);
void printStudent(Student_t student);
void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents);
void readAllStudentsDetails(Student_t **dpStudents, int *numberOfStudents, const char *input);
void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination);
void calculatePercentageBoysGirls (Student_t **dpStudents, int numberOfStudents);
void printStudentsFromSpecificCity(Student_t *pStudents, int numberOfStudents, const char *city);
void findStudentByNeptunCode(Student_t *pStudents, int numberOfStudents, const char *neptunCode);
void sortStudentsByName(Student_t *pStudents, int numberOfStudents, const char *destination);
void sortStudentsByAgeAndExam(Student_t *pStudents, int numberOfStudents, const char *destination);
#endif //LAB_03_STUDENT_H
