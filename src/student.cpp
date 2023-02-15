#include "include/student.h"
#include <iostream>
#include <iomanip>

//Global Variable
int next_student_id = 2000;

Student::Student()
{
    name = "Unknown";
    id = next_student_id++;
    gpa = 0.0;
}

Student::Student(const char* pName) : name(pName)
{
    id = next_student_id++;
    gpa = 0.0;
    displayStudent();
}

Student::Student(const char* pName, int student_id) : name(pName), 
    id(student_id) 
{
    gpa = 0.0;
    displayStudent();
}

Student::Student(const char* pName, int student_id, double student_gpa) : 
name(pName), id(student_id), gpa(student_gpa) 
{   
    displayStudent();
}

std::string Student::addName(std::string pName){
    name = pName;
    return name;
}

float Student::addGPA(float student_gpa){
    bool valid = false;
    do{ 
        if (student_gpa >= 0 && student_gpa <= 4){      
            gpa = student_gpa;
            valid = true;
            return gpa;
        }
        else if (student_gpa < 0 || student_gpa > 4){
            std::cout<<"Please enter a valid GPA (0.0 - 4.0): ";
            std::cin>>student_gpa;
            std::cin.ignore();
        }
    } while (!valid);
    return gpa;
}

void Student::displayStudent(){
    std::cout<< name << " registered as student.\n"
             <<"ID number: "<< id 
             <<"\nGPA: "<< std::fixed << std::setprecision(2)
             << gpa <<"\n"<<std::endl;
}

Student::~Student(){}
