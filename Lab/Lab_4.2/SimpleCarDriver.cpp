#include "SimpleCar.h"

void softNameOutput (string softName) {
    int widthNum = softName.size() + 7;

    cout << "\n" << setw(widthNum) << setfill('*') << "\n";
    cout << "** " + softName + " **";
    cout << "\n" << setfill('*') << setw(widthNum) << "\n" << endl;
}

int main() {
    //Variable Initialization
    int milesForwardDriven;
    int milesReverseDriven;

    //Variable Initialization and Declaration


    //Void output to display name of program
    softNameOutput("Simple Car - Distance Calculator");   

    //Gather Inputs
    cin >> milesForwardDriven;
    cin >> milesReverseDriven;

    //Instantiate Class
    SimpleCar SimpleCar1;

    //Set class object members
    SimpleCar1.SetForwardMiles(milesForwardDriven);
    SimpleCar1.SetCarStatus();
    cout << SimpleCar1.GetHornHonk() << endl;
    cout << SimpleCar1.GetCarStatus() << endl;


    SimpleCar1.SetReverseMiles(milesReverseDriven);
    SimpleCar1.SetCarStatus();
    cout << SimpleCar1.GetHornHonk() << endl;
    cout << SimpleCar1.GetCarStatus() << endl;

    
   return 0;
}