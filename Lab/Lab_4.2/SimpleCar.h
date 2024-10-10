#include <iostream>
#include <string>
#include <iomanip>

#ifndef SIMPLECAR_H
#define SIMPLECAR_H

using namespace std;

class SimpleCar {

public:
    //functions
    int GetNumMiles();
    string GetHornHonk();
    string GetCarStatus();

    void SetForwardMiles (int inputMiles);
    void SetReverseMiles (int inputMiles);
    void SetCarStatus ();

private:
    int currentMileage = 0;
    string status;
};

void SimpleCar::SetForwardMiles (int inputMileage) {
    this->currentMileage += inputMileage;
}

void SimpleCar::SetReverseMiles (int inputMileage) {
    this->currentMileage -= inputMileage;
}

void SimpleCar::SetCarStatus () {
    status = "Car has diven: " + to_string(currentMileage);
}

string SimpleCar::GetHornHonk () {
    return "beep beep";
}

int SimpleCar::GetNumMiles() {
    return currentMileage;
}

string SimpleCar::GetCarStatus() {
    return status;
}

#endif