#include <iostream>
#include <iomanip>
using namespace std;

void softNameOutput (string softName) {
    int widthNum = softName.size() + 7;

    cout << "\n" << setw(widthNum) << setfill('*') << "\n";
    cout << "** " + softName + " **";
    cout << "\n" << setfill('*') << setw(widthNum) << "\n" << endl;
}

int FeetToSteps (double numFeetWalked) {
    double stepsPerFeet;

    stepsPerFeet = numFeetWalked / 2.5;
    
    return static_cast<int>(stepsPerFeet);
}

int main() {
    //Variable Initialization
    double inputFeet;
    int outputSteps;

    //Variable Initialization and Declaration


    //Void output to display name of program
    softNameOutput("Template Program Name");       

    //Statement to user requesting user input
    cout << "Enter the number of feet walked:" << endl;

    //Assign User Input to Variables
    cin >> inputFeet;

    //Process functions
    outputSteps = FeetToSteps(inputFeet);

    //Process code in main function


    //Run main function output stream
    cout << "Number of steps completed: " << outputSteps << endl;

   return 0;
}