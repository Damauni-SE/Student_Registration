#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student
{
    public:
    Student();
    Student(const char*);
    Student(const char*, int);
    Student(const char*, int, double);
    std::string addName(std::string);
    float addGPA(float);
    void displayStudent();
    ~Student();

    protected:
    std::string name;
    int id;
    float gpa;
};
#endif