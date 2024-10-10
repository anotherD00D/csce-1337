#include <iostream>
#include <iomanip>
using namespace std;

void softNameOutput (string softName) {
    int widthNum = softName.size() + 7;

    cout << "\n" << setw(widthNum) << setfill('*') << "\n";
    cout << "** " + softName + " **";
    cout << "\n" << setfill('*') << setw(widthNum) << "\n" << endl;
}

double LapsToMiles (double numLaps) {
    double numMiles = numLaps * 0.25;
    
    return numMiles;
}

int main() {
    //Variable Initialization
    double inputLaps;
    double outputMiles;

    //Variable Initialization and Declaration


    //Void output to display name of program
    softNameOutput("Template Program Name");       

    //Statement to user requesting user input
    cout << "Enter the number of laps completed:" << endl;

    //Assign User Input to Variables
    cin >> inputLaps;

    //Process functions
    outputMiles = LapsToMiles(inputLaps);

    //Process code in main function


    //Run main function output stream
    cout << "Number of miles completed: " << fixed << setprecision(2) << outputMiles << endl;

   return 0;
}