#include <stdio.h>
#include "student.h"

int main(void) {
  /*  Student_t student1 = {
            "Kovacs Peter",
            "ABC1234",
            "Budapest",
            {2000, 5, 15},
            MALE,
            87.5
    };
    printStudent(student1);
    Student_t student;
    if(!freopen("student1.txt","r", stdin)){
        printf("Input file error");
        exit(-1);
    }
    readStudentDetails(&student);
    printStudent(student);
    freopen("CON","r",stdin);
    */
    Student_t *students;
    int numberOfStudents;
    readAllStudentsDetails(&students,&numberOfStudents,"student.txt");
   /* printAllStudents(students,numberOfStudents,NULL);
    calculatePercentageBoysGirls(&students,numberOfStudents);
    printStudentsFromSpecificCity(students,numberOfStudents,"Budapest");
    findStudentByNeptunCode(students,numberOfStudents,"QSTRG9");*/
    sortStudentsByName(students,numberOfStudents,"student.txt");
    return 0;
}
