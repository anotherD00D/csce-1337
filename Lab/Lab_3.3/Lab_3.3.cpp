#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void softNameOutput (string softName) {
    int widthNum = softName.size() + 7;

    cout << "\n" << setw(widthNum) << setfill('*') << "\n";
    cout << "** " + softName + " **";
    cout << "\n" << setfill('*') << setw(widthNum) << "\n" << endl;
}

double DrivingCost (double milesPerGallon, double dollarsPerGallon, double milesDriven) {
    return ((milesDriven/milesPerGallon) * dollarsPerGallon);
}

int main() {
    //Variable Initialization
    vector<double> numMiles = {10, 50, 400};
    double inputMilesPerGallon;
    double inputDollarsPerGallon;


    //Variable Initialization and Declaration


    //Void output to display name of program
    softNameOutput("Template Program Name");       

    //Statement to user requesting user input

    cout << "Please enter the number of miles per gallon: " << endl;
    cin >> inputMilesPerGallon;

    cout << "Please enter the number of dollars per gallon" << endl;
    cin >> inputDollarsPerGallon;

    for (int unsigned i = 0; i < numMiles.size(); ++i) {
        cout << fixed << setprecision(0) << "Cost for " << numMiles.at(i) << " miles is ";
        cout << fixed << setprecision(2) << DrivingCost(inputMilesPerGallon, inputDollarsPerGallon, numMiles.at(i)) << endl;
    }
    
   return 0;
}