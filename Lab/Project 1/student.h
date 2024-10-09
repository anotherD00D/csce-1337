#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iomanip>


#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student {
    public:
        Student();
        Student(string name, double grade);

        string const GetName();
        double const GetGrade();

        void SetName(string name);
        void SetGrade(double grade);
    
    private:
        string name;
        double grade;
};

class Competition {
    public:
        Competition();
        Competition(vector<Student> students);

        char const GetChoice();

        void ShowMenu();
        void AddStudent(string const &name, double const &grade);
        void RemoveStudent(string const &name);
        void UpdateStudent(string const &name, double const &grade);
        void DisplayThreshold(double const &grade);
        void OutputRoster();

    private:
        vector<Student> students;
        char choice;
};

#endif