#include "student.h"

    Student::Student() {
        name = "New Student";
        grade = 0;
    }

    Student::Student(string name, double grade) {
        this->name = name;
        this->grade = grade;
    }

    string const Student::GetName() {
        return name;
    }
    double const Student::GetGrade() {
        return grade;
    }

    void Student::SetName(string name) {
        this->name = name;
    }
    void Student::SetGrade(double grade) {
        this->grade = grade;
    }

    Competition::Competition() {
        students = {};
    }

    Competition::Competition(vector<Student> studends) {
        this->students = studends;
    }

    char const Competition::GetChoice() {
        return choice;
    }


    void Competition::ShowMenu() {
        string menuName = "Programming Competition Menu";
        vector<string> menuOperations = {"Add a student", "Remove a student", "Update a student's grade", "Display students above a certain grade", "Output Class Roster"};
        char integerChar = 65;
        string InputName;
        double InputGrade;
        
        menuOperations.push_back("Quit");

        cout << "\n" << setw(menuName.size() + 7) << setfill('*') << "\n";
        cout << "** " + menuName + " **";
        cout << "\n" << setw(menuName.size() + 7) << setfill('*') << "\n" << endl;

        for(const string& Str : menuOperations) {
            if (Str == "Quit") {
                integerChar = 81;
            }
            else if (Str == "Output Class Roster") {
                integerChar = 79;
            }
            cout << integerChar << ".) ";
            cout << Str << endl;
            integerChar += 1;
        }

        cout << endl << "Enter a letter choice: " << endl;
        cin >> choice;

        switch (toupper(choice)) {
            case 'A':
                cout << "Enter the name of the student to add: ";
                cin >> InputName;
                
                cout << "Enter the grade of the student: ";
                cin >> InputGrade;

                AddStudent(InputName, InputGrade);

                break;
            case 'B':
                cout << "Enter the full name of the student to remove: ";
                cin >> InputName;

                RemoveStudent(InputName);

                break;

            case 'C':
                cout << "Enter the full name of the student to update: ";
                cin >> InputName;

                cout << "Enter the new grade: ";
                cin >> InputGrade;

                UpdateStudent(InputName, InputGrade);
                break;
            case 'D':
                cout << "Enter the minimum grade you wish to view: ";
                cin >> InputGrade;

                DisplayThreshold(InputGrade);

                break;
            case 'O':
                cout << "Class Roster: " << endl;

                OutputRoster();

                break;
            case 'Q':
                cout << "Exiting Application......" << endl;
                break;
            default:
                cout << "Selected letter choice is not applicable, please try again..." << endl;
                break;
        }
    }

    void Competition::AddStudent(string const &name, double const &grade) {
        Student NewStudent(name, grade);
        students.push_back(NewStudent);

        cout << "Student ";
        cout << students.back().GetName();
        cout << " add with grade ";
        cout << students.back().GetGrade() << "." << endl;
    }

    void Competition::RemoveStudent(string const &name) {
        for(unsigned int i = 0; i < students.size(); ++i) {
            if(students.at(i).GetName() == name) {
                students.erase(students.begin()+i);
            }
        }
        cout << "Student " + name + " was removed from the roster." << endl;
    }

    void Competition::UpdateStudent(string const &name, double const &grade) {
        for(unsigned int i = 0; i < students.size(); ++i) {
            if(students.at(i).GetName() == name) {
                students.at(i).SetGrade(grade);
            }
        }
        cout << "Student " + name + " grade was updated to ";
        cout << grade << "." << endl;
    }

    void Competition::DisplayThreshold(double const &grade) {
        cout << "Class roster of students above the competition grade of " << grade << " :" << endl;

        for(Student& obj : students) {
            if(obj.GetGrade() >= grade) {
                cout << obj.GetName() << " - " << obj.GetGrade() << endl;
            }
        }
    }

    void Competition::OutputRoster() {
        for(Student& obj : students) {
            cout << obj.GetName() << " - " << obj.GetGrade() << endl;
        }
    }