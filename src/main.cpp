/* Author: Dwayne Bingham 
 * Program designed to demonstrate overloading a constructor. Also designed to
 * allow a user to enter data required to register a student.
 */

#include"include/student.h"
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //Demonstrates overloaded Constructor with different parameters
    Student a;
    Student b("Sonya Blade");
    Student c("Johnny Cage", 9998);
    Student d("John Snow", 9999, 4.0);
    
    //Prompts user to register students
    int num_students = 0;
    std::cout<<"How many students would you like to add? ";
    std::cin>>num_students;
    std::cin.ignore();

    Student* ptrS = new Student[num_students];
    string student_name;
    float student_gpa = 0;
    for (int i = 0; i < num_students; i++){
        std::cout<<"Please enter student name: ";
        std::getline(std::cin, student_name);
        ptrS[i].addName(student_name);
        
        std::cout<<"Please enter student's GPA: ";
        std::cin>>student_gpa;
        std::cin.ignore();
        ptrS[i].addGPA(student_gpa);
    }

    std::cout<<"\nRegistration Complete."<<std::endl;
    for (int i = 0; i < num_students; i++){
        ptrS[i].displayStudent();
    }

    delete[] ptrS;

    return 0;
}